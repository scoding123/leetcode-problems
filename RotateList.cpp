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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL)
            return NULL;
        
        int len = 1;
        ListNode* curr = head;
        
        while(curr->next!=NULL){
            curr = curr-> next;
            len ++;
        }
        curr->next = head;
        
        int movek = len - (k%len) - 1;
        
        curr = head;
        int count = 0;
        while(count<movek){
            curr = curr -> next;
            count++;
        }
        
        head = curr->next;
        curr-> next = NULL;
        
        return head;
    }
};
