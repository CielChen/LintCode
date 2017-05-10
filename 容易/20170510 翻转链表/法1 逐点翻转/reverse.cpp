/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
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
     * @return: The new head of reversed linked list.
     */
    ListNode *reverse(ListNode *head) {
        // write your code here
        //法1：遍历单链表，逐个链接点进行反转。
        ListNode *p,*resultHead;
        p=head;
        resultHead=new ListNode;
        
        if(p==NULL)
            return NULL;
        else
        {
            //将p的信息赋给resultHead
            resultHead->val=p->val;
            resultHead->next=NULL;
            p=p->next;
        }
        while(p!=NULL)
        {
            //将p的信息赋给temp
            ListNode *temp;
            temp=new ListNode;
            temp->val=p->val;
            temp->next=resultHead;
            resultHead=temp;
            
            p=p->next;
        }
        return resultHead;
    }
};
