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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode *result;
        result=new ListNode;
        ListNode *p1,*p2,*p3;
        p1=l1;
        p2=l2;
        p3=result;
        int sum,up;
        up=0;  //��λ
        while(p1!=NULL && p2!=NULL)
        {
            sum=p1->val+p2->val+up;
            if(sum<10)
            {
                up=0;
                ListNode *temp;
                temp=new ListNode;
                temp->val=sum;
                p3->next=temp;
                p3=temp;
            }
            else
            {
                up=1;
                ListNode *temp;
                temp=new ListNode;
                temp->val=sum-10;
                p3->next=temp;
                p3=temp;
            }
            p1=p1->next;
            p2=p2->next;
        }
        while(p1!=NULL)  //l1��������
        {
            sum=p1->val+up;
            if(sum<10)
            {
                up=0;
                ListNode *temp;
                temp=new ListNode;
                temp->val=sum;
                p3->next=temp;
                p3=temp;
            }
            else
            {
                up=1;
                ListNode *temp;
                temp=new ListNode;
                temp->val=sum-10;
                p3->next=temp;
                p3=temp;
            }
            p1=p1->next;
        }
        while(p2!=NULL)  //l2��������
        {
            sum=p2->val+up;
            if(sum<10)
            {
                up=0;
                ListNode *temp;
                temp=new ListNode;
                temp->val=sum;
                p3->next=temp;
                p3=temp;
            }
            else
            {
                up=1;
                ListNode *temp;
                temp=new ListNode;
                temp->val=sum-10;
                p3->next=temp;
                p3=temp;
            }
            p2=p2->next;
        }
        if(up==1)  //�����������ӽ���֮�󣬽�λ��Ϊ�㣬��ʱ��ʾ�����ֵ��ԭ��������Ҫ����һλ
        {
            ListNode *temp;
            temp=new ListNode;
            temp->val=up;
            p3->next=temp;
            p3=temp;
        }
        p3->next=NULL;
        result=result->next;
        return result;
    }
};
