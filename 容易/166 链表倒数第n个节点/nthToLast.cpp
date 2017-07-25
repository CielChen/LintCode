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
     * @param n: An integer.
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode *nthToLast(ListNode *head, int n) {
        // write your code here
        ListNode *p,*q;
        if(n < 1)  //参数n为0或者负数
            return NULL;  
    
        q = head;  
        while(--n){  
            if(!q->next)   //n大于节点数目
                return NULL;  
            q = q->next;  
        }  
        p = head;  
        while(q->next){  
            p = p->next;  
            q = q->next;  
        }  
        return p;  
    }
};


