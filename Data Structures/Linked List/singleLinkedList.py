# single linked list using python
# node structure
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# single linked list structure
class SingleLinkedList:
    def __init__(self, node=None):
        self.head = node

    def append(self, data):                         # append node at the end of the list
        if self.head == None:
            self.head = Node(data)
        else:
            temp = self.head
            while temp.next != None:
                temp = temp.next
            temp.next = Node(data)
    
    def pop_back(self):                             # delete element at the back of the list
        if self.head == None:
            print('List has no element. Can\'t pop')
        else:
            temp = self.head
            while temp.next.next != None:
                temp = temp.next
            temp.next = None

    def display(self):                              # display the entire list
        if self.head == None:
            print('Linked list is empty')
        else:
            temp = self.head
            while temp != None:
                print(temp.data, end=' ')
                temp = temp.next
            print()

# driving code
if __name__ == '__main__':
    ll = SingleLinkedList()
    ll.append(10)
    ll.append(20)
    ll.append(30)
    ll.display()
    ll.pop_back()
    ll.display()
