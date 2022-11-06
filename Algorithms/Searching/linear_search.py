# demonstration of linear search
# searching algorithm
def search(items, key) -> int:                  # time complexity: O(n), space complexity: O(1)
    for i in range(len(items)):                 # time: O(n)
        if items[i] == key:
            return i+1
    return -1

# driving code
if __name__ == "__main__":
    items = list(map(int, input("Enter elements: ").strip().split()))
    key = int(input("Enter the key: ").strip())
    print("Index: {}".format(search(items, key)))