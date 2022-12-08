# Insertion sort
def insertion_sort(arr):
    ''' The array is virtually split into a sorted and an unsorted part. Values from
        the unsorted part are picked and placed at the correct position in the sorted part.
        Time complexity: O(n^2)
        Space complexity: O(1)
        Return: [sorted array, total number of comparision]'''
    comparision = 0
    # code
    for j in range(1,len(arr)):
        key = arr[j]
        i = j-1
        while i >= 0 and arr[i] > key:
            arr[i+1] = arr[i]
            i -= 1
        arr[i+1] = key
    return arr, comparision

if __name__ == "__main__":
    arr = [5,4,3,2,1]
    # testing goes here
    print(insertion_sort(arr))