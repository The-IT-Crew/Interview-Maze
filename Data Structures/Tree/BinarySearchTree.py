# Implementation of binary search tree using python
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class Tree:
    def __init__(self, data=None):
        if data == None:
            self.root = None
        else:
            self.root = Node(data)
    
    def insert(self, data):
        if self.root == None:
            self.root = Node(data)
        else:
            temp = self.root
            while True:
                if data < temp.data:
                    if temp.left == None:
                        temp.left = Node(data)
                        break
                    else:
                        temp = temp.left
                else:
                    if temp.right == None:
                        temp.right = Node(data)
                        break
                    else:
                        temp = temp.right

    def search(self, key):
        if self.root == None:
            print('Tree is empty')
        else:
            temp = self.root
            count = 0
            while True:
                count += 1
                if key == temp.data:
                    return count
                if key < temp.data and temp.left != None:
                    temp = temp.left
                elif key > temp.data and temp.right != None:
                    temp = temp.right
                else:
                    return -1

# driving code
if __name__ == '__main__':
    tree = Tree(30)
    tree.insert(50)
    tree.insert(20)
    tree.insert(70)
    tree.insert(35)
    print(f'35 found at height {tree.search(35)}')
    print(f'20 found at height {tree.search(20)}')
    print(f'40 found at height {tree.search(40)}')

#      30
#     /  \
#    20   50
#        /  \
#       35  70
