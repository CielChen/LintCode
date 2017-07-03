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
     * @param x: an integer
     * @return: a ListNode 
     */
    ListNode *partition(ListNode *head, int x) {
        // write your code here
        if(head==NULL)
            return head;
            
        ListNode *leftList=new ListNode;
        ListNode *rightList=new ListNode;
        ListNode *left=leftList;
        ListNode *right=rightList;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                left->next=head;
                left=left->next;
            }
            else  //大于等于x
            {
                right->next=head;
                right=right->next;
            }
            head=head->next;
        }
        left->next=rightList->next;
        right->next=NULL;
        return leftList->next;
    }
};


