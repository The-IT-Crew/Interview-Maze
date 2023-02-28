# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# REVERSE A LINKED LIST
# Problem Link: https://leetcode.com/problems/reverse-linked-list/description/
# Problem Statement: Given the head of a singly linked list, reverse the list, and return the reversed list.

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
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
