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
        //法2：从第2个节点到第N个节点，依次逐节点插入到第1个节点(head节点)之后，最后将第一个节点挪到新表的表尾
        if(head==NULL)
            return NULL;
            
        ListNode *p,*q;
        p=head->next;
        
        if(p==NULL)  //链表只有一个元素
            return head;
        //链表有大于等于2个元素
        while(p->next!=NULL)
        {  
            q=p->next;  
            p->next=q->next;  
            q->next=head->next;  
            head->next=q;  
        }  
        p->next=head;//相当于成环  
        head=p->next->next;//新head变为原head的next  
        p->next->next=NULL;//断掉环  
        return head; 
        
    }
};
