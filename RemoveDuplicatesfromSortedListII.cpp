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
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        ListNode* curr = head;
        int flag=0;
        ListNode* prev = head;
        ListNode* curr_next=NULL;
        
        while(curr != NULL){
            
        if(curr -> next !=NULL && curr -> val == curr -> next -> val){
            ListNode* next_next = curr -> next -> next;
            free(curr->next);
            curr-> next = next_next; 
            flag = 1;
            
        }
            
            else{
                  if(flag ==1){
                      curr_next = curr -> next;
                      free(curr);
                      if(prev == curr){
                          if(prev == head){
                              head= curr_next;
                          }
                          prev = curr = curr_next;
                      }
                      else{
                          prev->next = curr_next;
                          curr = curr_next;
                      }
                      flag =0;
                      
                  }
                else{
                    
                    prev = curr;
                    curr = curr->next;
                }
                
            }
            
            
        }
        return head;
    }
};
