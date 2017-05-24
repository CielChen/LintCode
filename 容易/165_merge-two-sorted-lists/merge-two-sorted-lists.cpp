/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/merge-two-sorted-lists
@Language: C++
@Datetime: 17-05-19 10:43
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
     * @param ListNode l1 is the head of the linked list
     * @param ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode *merge,*head,*p,*q;
        head=new ListNode;
        p=l1;
        q=l2;
        if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        else{
            if(l1->val <= l2->val){
                head->val=l1->val;
                p=p->next;
            }
            else{
                head->val=l2->val;
                q=q->next;
            }
        }
        merge=head;
        
        while(p!=NULL && q!=NULL)
        {
            ListNode *tmp;
            tmp=new ListNode;
            if(p->val <= q->val)
            {
                tmp->val=p->val;
                p=p->next;
            }
            else{
                tmp->val=q->val;
                q=q->next;
            }
            merge->next=tmp;
            merge=merge->next;
        }
        while(p!=NULL){
            ListNode *tmp;
            tmp=new ListNode;
            tmp->val=p->val;
            p=p->next;
            merge->next=tmp;
            merge=merge->next;
        }
        while(q!=NULL){
            ListNode *tmp;
            tmp=new ListNode;
            tmp->val=q->val;
            q=q->next;
            merge->next=tmp;
            merge=merge->next;
        }
        merge->next=NULL;
        
        return head;
    }
};