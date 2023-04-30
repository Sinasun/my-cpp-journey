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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* current = head;
        while(true) {
            if(head == nullptr){
                if(list1 == nullptr && list2 != nullptr){
                    head = new ListNode(list2 -> val);
                    current = head;
                    cout << "List2: " << list2 -> val << endl;
                    list2 = list2 -> next; 
                    continue;
                }
                if(list2 == nullptr && list1 != nullptr){
                    head = new ListNode(list1 -> val);
                    current = head;
                    cout << "List2: " << list1 -> val << endl;
                    list1 = list1 -> next; 
                    continue;
                }
                if(list1 == nullptr && list2 == nullptr){
                    break;
                }

                if((list1 -> val) <= (list2 -> val)){
                    head = new ListNode(list1 -> val);
                    current = head;

                    cout << "List1: " << list1 -> val << endl;
                    list1 = list1 -> next;
                } else{
                    head = new ListNode(list2 -> val);
                    current = head;

                    cout << "List2: " << list2 -> val << endl;
                    list2 = list2 -> next;
                }
            }else{
                while(list1 == nullptr && list2 != nullptr){
                    current->next = new ListNode(list2 -> val);
                    current = current->next;
                    cout << "List2s: " << list2 -> val << " " << head -> val << endl;
                    list2 = list2 -> next; 
                }
                while(list2 == nullptr && list1 != nullptr){
                    current->next = new ListNode(list1 -> val);
                    current = current->next;
                    cout << "List2s: " << list1 -> val << endl;
                    list1 = list1 -> next; 
                }
                if(list1 == nullptr && list2 == nullptr){
                    break;
                }

                if((list1 -> val) <= (list2 -> val)){
                    current->next = new ListNode(list1 -> val);
                    current = current->next;
                    cout << "List1s: " << list1 -> val << " " << head -> val << endl;
                    list1 = list1 -> next;
                } else{
                    current->next = new ListNode(list2 -> val);
                    current = current->next;
                    cout << "List2s: " << list2 -> val << " " << head -> val << endl;
                    list2 = list2 -> next;
                }
            }
           
            
        }
        return head;

    }

};