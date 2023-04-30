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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        int last = head -> val;
        ListNode* current = head;
        ListNode* ans = new ListNode(last);
        ListNode* currentans = ans;
        while(current != nullptr){
            if(current -> val != last){
                last = current -> val;
                currentans -> next = new ListNode(current -> val);
                currentans = currentans -> next;
            }
            current = current -> next;
        }     
        return ans;   
    }
};