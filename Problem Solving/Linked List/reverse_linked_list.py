# REVERSE A LINKED LIST
# Problem Link: https://leetcode.com/problems/reverse-linked-list/description/
# Problem Statement: Given the head of a singly linked list, reverse the list, and return the reversed list.

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    
    # bruit force solution with O(n^2) time complexity, with constant space
    def reverseList1(self, head: Optional[ListNode]) -> Optional[ListNode]:
        listNode_temp = ListNode()
        listNode_head = listNode_temp

        # Iterate until head gets empty
        while head and head.next:
            temp = head
            
            while temp.next.next != None:
                temp = temp.next
            
            new_listNode = ListNode(temp.next.val)
            listNode_temp.next = new_listNode
            listNode_temp = listNode_temp.next
            temp.next = None
        
        listNode_temp.next = head

        return listNode_head.next
    
    # optimized time complexity to O(n) and O(n) space
    def reverseList2(self, head: Optional[ListNode]) -> Optional[ListNode]:
        listNode_temp = ListNode()
        listNode_head = listNode_temp
        stack = list()

        # iterate through the head
        while head:
            stack.append(head.val)
            head = head.next
        
        # insert values to the new linked list
        while len(stack) != 0:
            new_listNode = ListNode(stack[-1])
            listNode_temp.next = new_listNode
            listNode_temp = listNode_temp.next
            stack.pop()

        return listNode_head.next
