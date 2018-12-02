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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL)
            return NULL;
        
        ListNode* temp = head;
        int len =0;
        while(temp){
            len++;
            temp = temp->next;
        }
        
        temp=head;
        
        if(len==n)
            return head->next;
         
        for(int i=0;i<len-n-1;i++){         
            temp=temp->next;
        }
               
        if(temp!=NULL&&temp->next!=NULL)
       temp->next = temp->next->next; 
        
        return head;
    }
   
    
};
