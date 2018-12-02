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
        
       ListNode* ptr1=head;
        ListNode* res=head;
        int count=0;
        while(count< n){
            ptr1=ptr1->next;
            count++;
        }
        
       if(ptr1==NULL)
           return head->next;
        
        ListNode* prev= head;
    while(ptr1!=NULL){
     ptr1=ptr1->next;
        prev=res;
     res=res->next;
      } 
        
        if(prev!=NULL&&prev->next!=NULL)
        prev->next=prev->next->next;
        
        
        
        return head;
   
    
    }
    };
