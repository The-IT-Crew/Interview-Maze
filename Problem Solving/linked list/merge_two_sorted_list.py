
# Problem link: https://leetcode.com/problems/merge-two-sorted-lists/
# Problem statement: You are given the heads of two sorted linked lists list1 and list2.
# Merge the two lists in a one sorted list. The list should be made by splicing together the 
# nodes of the first two lists.

# Sample Examples:
# Input: list1 = [1,2,4], list2 = [1,3,4]
# Output: [1,1,2,3,4,4]

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1, list2):
        head = ListNode()
        ptr = head
        
        # until each list have elements
        while list1 and list2:
            if list1.val < list2.val:
                ptr.next = ListNode(list1.val)
                list1 = list1.next
            else:
                ptr.next = ListNode(list2.val)
                list2 = list2.next
            ptr = ptr.next

        # list1 have more elemets to add
        if list1:
            ptr.next = list1
        
        # list2 have more elemets to add
        elif list2:
            ptr.next = list2
        
        return head.next



