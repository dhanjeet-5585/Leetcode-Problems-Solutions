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
    int getDecimalValue(ListNode* head) {
        int size=0;
        ListNode* curr= head;
        while(curr!=nullptr){
            curr=curr->next;
            size++;
        }
        int power= size-1;
        int val=0;
        ListNode* curr1= head;
        while(curr1!=nullptr){
            val+= curr1->val*pow(2,power);
            curr1=curr1->next;
            power--;
        }
        return val;
        
    }
};