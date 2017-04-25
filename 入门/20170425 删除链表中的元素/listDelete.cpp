/*-------------------------------
Author: Ciel 
Date: 2017.04.25
算法描述：删除链表中等于给定值val的所有节点。 
--------------------------------------*/
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
     * @param val an integer
     * @return a ListNode
     */
    ListNode *removeElements(ListNode *head, int val) {
        // Write your code here
        ListNode* p=head;
        while(p!=NULL)  //一直访问到表结尾
        {
            if(p->val==val)  //第一个元素就为要删除的元素
            {
                ListNode* temp=p;
                p=p->next;
                head=p; //重新设置表头
                free(temp);
            }
            else
            {
                ListNode* temp=p->next;
                if(temp==NULL)  //此时p已经指向了最后一个有效元素,且该元素不是要删除的
                    return head;
                else if(temp->val!=val)
                    p=p->next;
                else
                {
                    p->next=temp->next;
                    free(temp);
                }
            }
        }
        return head;
    }
};