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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head==NULL){
            return head;
      }
        ListNode*cur = head;
        int len =0;
        while(cur!=NULL){
            len++;
            cur = cur->next;
        }
        int ans = abs(len-n-1);
        cur = head;
        if(len==n){
            return head->next;
        }
        while(ans--){
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return head;
        
    }
};