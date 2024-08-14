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
    ListNode* oddEvenList(ListNode* head) {
        // ListNode*res = new ListNode(0);
        ListNode*cur = head;
          if(cur==NULL || cur->next==NULL){
            return head;
        }
        ListNode*temp = cur->next;
        ListNode*prev = cur->next;
        while(cur->next!=NULL && temp->next!=NULL){
            cur->next = temp->next;
            cur = cur ->next;
            temp->next = cur->next;
            temp = temp->next;
            
        }
        cur->next = prev;
        return head;
        
        
    }
};