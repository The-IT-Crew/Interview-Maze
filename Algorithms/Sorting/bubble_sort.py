# Bubble sort
def bubble_sort(arr):
    ''' Sort the array by swapping conjugate indexes in the array.
        Time complexity: O(n^2)
        Space complexity: O(1), in place algorithm
        Stability: Unstable
        Return: [sorted array, total number of comparision]'''
    comparision = 0
    for i in range(0, len(arr)-1):
        swapped = False
        for j in range(0, len(arr)-i-1):
            comparision += 1
            if arr[j] > arr[j+1]:
                swapped = True
                arr[j], arr[j+1] = arr[j+1], arr[j]
        print(swapped)
        if swapped == False:
            break
    return arr, comparision
