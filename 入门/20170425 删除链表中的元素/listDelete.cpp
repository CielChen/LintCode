/*-------------------------------
Author: Ciel 
Date: 2017.04.25
�㷨������ɾ�������е��ڸ���ֵval�����нڵ㡣 
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
        while(p!=NULL)  //һֱ���ʵ����β
        {
            if(p->val==val)  //��һ��Ԫ�ؾ�ΪҪɾ����Ԫ��
            {
                ListNode* temp=p;
                p=p->next;
                head=p; //�������ñ�ͷ
                free(temp);
            }
            else
            {
                ListNode* temp=p->next;
                if(temp==NULL)  //��ʱp�Ѿ�ָ�������һ����ЧԪ��,�Ҹ�Ԫ�ز���Ҫɾ����
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