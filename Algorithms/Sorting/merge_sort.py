# Merge sort
import math, sys

# merging proccedure
def merge(arr, p, q, r):
    ''' Merge two sorted array in ascending order
        Time complexity: O(n)
        Space complexity: O(n)
        Return: None''' 
    l_arr = arr[p:q+1]
    r_arr = arr[q+1:r]
    l_arr.append(sys.maxsize)
    r_arr.append(sys.maxsize)
    i = j = 0
    for k in range(p,r):
        if l_arr[i] < r_arr[j]:
            arr[k] = l_arr[i]
            i += 1
        else:
            arr[k] = r_arr[j]
            j += 1

# sorting algorithm
def merge_sort(arr, p=None, r=None):
    ''' Sort the array using merge sort algorithm
        Time complexity: O(n.log(n))
        Space complexity: O(n)
        Return: [sorted array, total number of comparision]'''
    comparision = 0
    # just for the 1st time
    if p == None and r==None:
        p = 0
        r = len(arr)
    # check if array conrains at least two elements
    if p < r-1:
        q = math.floor((p+r)/2)
        merge_sort(arr, p, q)
        merge_sort(arr, q+1, r)
        merge(arr, p, q, r)
    return arr, comparision

# testing
if __name__ == "__main__":
    arr = [4,2,6,1]
    print(merge_sort(arr))