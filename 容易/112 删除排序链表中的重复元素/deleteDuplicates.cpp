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
     * @return: head node
     */
    ListNode *deleteDuplicates(ListNode *head) {
        // write your code here
        if(head==NULL)
            return 0;
        if(head->next==NULL)
            return head;
        ListNode *cur=head;
        ListNode *pre=NULL;
        while(cur!=NULL)
        {
             
            if(pre!=NULL&&pre->val==cur->val)
            {
                pre->next=cur->next;
                cur=pre->next;
            }
            else
            {
                pre=cur;
                cur=pre->next;
            }
        }
        return head;
    }
};