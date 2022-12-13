# partition
def partition(arr, l, h):
    ''' place pivot to its right poisition and return the index of it '''
    pivot = l
    i = l
    j = h - 1
    while i < j:
        while arr[i] <= arr[pivot] and i < h-1:
            i += 1
        while arr[j] > arr[pivot]  and j >= l:
            j -= 1
        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
    if arr[j] < arr[pivot]:
        arr[j], arr[pivot] = arr[pivot], arr[j]
    return j

# Quick sort
def quick_sort(arr, l, h):
    ''' Select one element as pivot and place pivot to its right position
        Method: Recursive
        Time complexity: O(n.log(n))
        Space complexity: O(1)
        Return: [sorted array, total number of comparision] '''
    if l < h:
        pos = partition(arr, l, h)
        quick_sort(arr, l, pos)
        quick_sort(arr, pos+1, h)
    return arr

# testing
if __name__ == "__main__":
    arr = [6,5,8,9,3,10,15,12,16]
    print(quick_sort(arr,0,len(arr)))
