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
        ListNode* current = head;
        int counter = 0;
        while(current != nullptr){
            counter++;
            current = current -> next;

        }    
        ListNode* ans = nullptr;
        ListNode* anscurrent = ans;
        ListNode* current2 = head;
   
        for(int i = 0; i < counter; i++){
            cout << current2 -> val << endl;
            if(i == counter - n){
                current2 = current2 -> next;
                continue;
            }
            if(ans == nullptr){
                ans = new ListNode(current2 -> val);
                anscurrent = ans;
            }else{
                anscurrent -> next = new ListNode(current2 -> val);
                anscurrent = anscurrent -> next;
            }
            current2 = current2 -> next;

        } 
        return ans;
    }
};