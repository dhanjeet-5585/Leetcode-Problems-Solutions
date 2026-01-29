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
    bool hasCycle(ListNode *head) {
        if(!head || head->next==nullptr) return false;
        ListNode* slowptr=head;
        ListNode* fastptr=head;
        while((fastptr && fastptr->next)){

            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
            if(slowptr==fastptr){
                return true;
            }


        }
        return false;
        
    }
};