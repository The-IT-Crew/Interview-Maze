# demonstration of binary search
# searching algorithm using recursion
from math import *
def search(items, key, lower, upper) -> int:                    # time complexity: O(log(n)), space complexity: O(1)
    if lower <= upper and key <= items[upper-1]:                # boundary check
        mid = floor((lower + upper)/2)
        if items[mid] == key:                                   # base case
            return mid + 1
        elif key > items[mid]:                                  # recursion
            lower = mid + 1
            return search(items, key, lower, upper)
        else:                                                   # recursion
            upper = mid - 1
            return search(items, key, lower, upper)
    return -1

# driving code
if __name__ == "__main__":
    items = list(map(int, input("Enter elements: ").strip().split()))
    key = int(input("Enter the key: ").strip())
    lower = 0
    upper = len(items)
    print("Index: {}".format(search(items, key, lower, upper)))