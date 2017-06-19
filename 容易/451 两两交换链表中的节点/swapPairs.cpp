/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head a ListNode
     * @return a ListNode
     */
    ListNode* swapPairs(ListNode* head) {
        // Write your code here
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *p,*q;
        p=head;
        while(p!=NULL)
        {
            q=p->next;
            if(q==NULL)  //链表中的节点个数为奇数
                return head;
            int tmp=p->val;
            p->val=q->val;
            q->val=tmp;
            p=q->next;
        }
        return head;
    }
};