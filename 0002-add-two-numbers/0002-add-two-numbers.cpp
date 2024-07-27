/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode(0);
        ListNode*cur = ans;
        int carray =0;
        ListNode*p1 = l1;
        ListNode*p2 = l2;
        while(p1!=NULL || p2!=NULL){
            int x = (p1!=NULL)?p1->val:0;
            int y  = (p2!=NULL)?p2->val:0;
            int sum = (x+y+carray);
            carray = sum/10;
            cur->next = new ListNode(sum%10);
            cur = cur->next;
            if(p1!=NULL){
                p1 = p1->next;
            }
            if(p2!=NULL){
                p2 = p2->next;
            }
            
        }
        if(carray>0){
            cur->next = new ListNode(carray);
        }
        return ans->next;
        
    }
};