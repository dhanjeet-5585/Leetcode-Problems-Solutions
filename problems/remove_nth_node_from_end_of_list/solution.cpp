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
        if(!head) return nullptr;
        int total_nodes= 0;
        ListNode* curr= head;
        while(curr!= nullptr){
            curr=curr->next;
            total_nodes++;
        }
        int sum=1;
        ListNode* CURR= head;
        while(CURR!=nullptr){
            if(total_nodes-n==0){
                head= head->next;
                return head;
            }
            if(sum==(total_nodes-n)){
                CURR->next= CURR->next->next;
            }
            sum++;
            CURR=CURR->next;
        }
        return head;
        
    }
};