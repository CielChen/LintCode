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
     * @return: The head of linked list.
     */
    ListNode *insertionSortList(ListNode *head) {
        // write your code here
        //ListNode *p;
        //p=head;
        ListNode *dummy=new ListNode(0);  //创建一个新的链表dummy，该链表初始化含0个元素，即空链表
        while(head!=NULL)
        { 
            ListNode *node=dummy;  //node一直指向dummy链表
            while(node->next!=NULL && node->next->val<head->val)
            { 
                node=node->next;
            }
            ListNode *temp=head->next;  //head和temp一直指向原来的链表
            head->next=node->next;
            node->next=head;
            head=temp;
        }
        return dummy->next;
    }
};