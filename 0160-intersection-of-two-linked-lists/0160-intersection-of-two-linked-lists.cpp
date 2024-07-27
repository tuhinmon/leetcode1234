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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*h1 = headA;
        ListNode*h2 = headB;
        int c1=0;
        int c2 =0;
        while(h1!=NULL){
            c1++;
            h1 = h1->next;
        }
         while(h2!=NULL){
            c2++;
            h2 = h2->next;
        }
        h1 = headA;
        h2 = headB;
        if(c1>c2){
            int x = abs(c1-c2);
            while(x--){
                h1 = h1->next;
            }
        }
        else{
            int y = abs(c1-c2);
            while(y--){
                h2 = h2->next;
            }
        }
        while(h1!=NULL && h2!=NULL){
            
            if(h1==h2){
                return h1;
         }
            h1 =h1->next;
            h2 = h2->next;
    }
        return NULL;
        
    }
};