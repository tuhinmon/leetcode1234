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
        ListNode*cur = head;
        int count =0;
        while(cur!=NULL){
            count++;
            cur = cur->next;

        }
        // if tell that delete the frist node
        if(count==n){
            return head->next;
        }
        cur = head;
        int x =abs(count-n-1);
        while(x--){
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return head;
    }
};