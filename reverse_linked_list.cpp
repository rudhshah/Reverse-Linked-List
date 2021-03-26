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
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return head;
        }
        if(!head->next){
            return head;
        }
        ListNode* prev_ptr = nullptr;
        ListNode* temp = nullptr;
        
        while(head->next){
            temp = head->next;
            head->next = prev_ptr;
            if(prev_ptr){
                cout << prev_ptr->val;
            }
            prev_ptr =head;
            head = temp;
        }
        head->next = prev_ptr;
        return head;
    }
};
