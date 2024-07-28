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
    bool isPalindrome(ListNode* head) {
        ListNode*f = head;
        ListNode*s = head;
        while(f!=NULL && f->next!=NULL){
            f= f->next->next;
            s= s->next;
        }
        // odd case
        if(f!=NULL && f->next==NULL){
            s= s->next;
        }
        // divided linked list
        ListNode*prev = NULL;
        while(s!=NULL && s->next!=NULL){
            ListNode*temp = s->next;
            s->next = prev;
            prev = s;
            s =temp;
            
        }
        if(s!=NULL && s->next==NULL){
            s->next = prev;
       }
        f = head;
        while(f!=NULL && s!=NULL){
            if(f->val!=s->val){
                 return false;
            }
            f= f->next;
            s= s->next;
        }
        return true;
        
    }
};