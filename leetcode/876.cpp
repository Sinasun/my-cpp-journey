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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int counter = 0;
        while(current != nullptr){
            current = current -> next;
            counter++;
        }
        ListNode* ans = nullptr;
        ListNode* currentans = ans;
        ListNode* current2 = head;

        for(int i = 0; i < (counter / 2); i++){
            current2 = current2 -> next;
        }
        while(current2 != nullptr){
            if (ans == nullptr) {
                ans = new ListNode(current2 -> val);
                currentans = ans;
            } else {
                currentans->next = new ListNode(current2 -> val); 
                currentans = currentans->next; 
            }
            current2 = current2 -> next;
        }
        return ans;
    }
};