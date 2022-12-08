# Selection Sort
def selection_sort(arr):
    ''' Sorts an array by repeatedly finding the minimum element
        from the unsorted part and putting it at the beginning.
        Time complexity: O(n^2)
        Space complexity: O(1), in place algorithm
        Stability: Unstable
        Return: [sorted array, total number of comparision]'''
    comparision = 0
    for i in range(0, len(arr)):
        print(arr)
        min_index = i
        for j in range(i+1, len(arr)):
            comparision += 1
            if arr[min_index] > arr[j]:
                min_index = j
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr, comparision