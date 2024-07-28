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
    ListNode *detectCycle(ListNode *head) {
        ListNode*f = head;
        ListNode*s = head;
        while(f!=NULL && f->next!=NULL){
            f = f->next->next;
            s= s->next;
             if(f==s){
                f =head;
          while(f!=NULL && s!=NULL){
              if(f==s){
                  return s;
              }
              f= f->next;
              s= s->next;
           
           }
                
         }
            
    }
         return NULL;
       
    }
};