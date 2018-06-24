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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0,data;
        
        ListNode head(-1), *res= &head;
        while(l1!=NULL||l2!=NULL||carry){
             data = (l1?l1->val:0)+(l2?l2->val:0)+carry;
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
            carry=data/10;
            res->next=new ListNode(data%10);
            res=res->next;
        }
        return head.next;
    }
};
