/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/remove-nth-node-from-end-of-list
@Language: C++
@Datetime: 17-06-05 14:51
*/

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // write your code here
        ListNode *p = head;  
        while (n > 0 && p != NULL)  
        {  
            p = p->next;  
            n--;  
        }  
  
        //n大于链表长度
        if (n != 0)  
        {  
            return head;  
        }  
        
        //说明此时要删除的就是头节点
        if (n == 0 && p == NULL)  
        {  
            ListNode *temp = head->next;  
            delete head;  
            return temp;  
        }  
  
        ListNode *q = head;  
        while (p->next != NULL)  
        {  
            p = p->next;  
            q = q->next;  
        }  
  
        ListNode *temp = q->next->next;  
        delete q->next;  
        q->next = temp;  
  
        return head; 
    }
};


