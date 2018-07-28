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
        
        if(head== NULL)
            return NULL;
        ListNode* next_next  = NULL;
        
       ListNode* curr = head;
        
        while(curr != NULL && curr -> next != NULL){
            
            
            
            if(curr -> val == curr->next->val){
              next_next  = curr -> next -> next;
                free(curr-> next);
                curr ->next = next_next;
            }
            
            else{
                curr = curr -> next;
            }
            
             }
        
        return head;
        
        
        
    }
};
