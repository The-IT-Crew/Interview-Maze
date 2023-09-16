# Max Min algorithm (https://www.tutorialspoint.com/design_and_analysis_of_algorithms/design_and_analysis_of_algorithms_max_min_problem.htm)
# Problem: Find the maximum and minimum from a given array of n elements

# Total number of comparison: https://youtu.be/x7V2rf16NRk?list=PLir19lgiavA2h95ln1UUwPoZkt9ueSbhQ&t=4596
# Time complexity: O(n)

def algorithm(array, low, high):
    # Base case
    if (low == high):
        return array[low], array[low]
    elif (low == high-1):
        return max(array[low],array[high]), min(array[low],array[high])

    # Recursion
    mid = round((low+high)/2)
    max1, min1 = algorithm(array, low, mid)
    max2, min2 = algorithm(array, mid+1, high)
    return max(max1, max2), min(min1, min2)

# Driving Code
if __name__ == "__main__":
    array = list(map(int, input("Elements= ").strip().split(" ")))
    max,min = algorithm(array, 0, len(array)-1)
    print([max, min])
