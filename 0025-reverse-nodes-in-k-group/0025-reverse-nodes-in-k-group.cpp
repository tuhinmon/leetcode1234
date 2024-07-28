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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*ans = new ListNode(0);
        ans->next = head;
        ListNode*cur = ans;
        ListNode*temp = ans;
        ListNode*prev = ans;
        ListNode*temp1= head;
        int count=0;
        while(temp1!=NULL){
            count++;
            temp1= temp1->next;
        }
        while(count>=k){
            cur = prev->next;
            temp = cur->next;
            for(int i=1;i<k;i++){
                cur->next = temp->next;
                temp->next = prev->next;
                prev->next = temp;
                temp = cur->next;
            }
            prev = cur ;
            count = count-k;
      }
        return ans->next;
        
    }
};