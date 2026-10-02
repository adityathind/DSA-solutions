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
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* preGroup= &dummy;

        while( preGroup->next!= nullptr ) {

            ListNode* kth = preGroup;
            //checking for k nodes 
            for(int i = 0; i < k; i++) {
                kth= kth->next;
                if (kth == nullptr)
                return dummy.next;
            }
            ListNode* nextgroup = kth->next;
            ListNode* prev = kth->next;
            ListNode* curr = preGroup->next;
            
            //reversing 
            while ( curr != nextgroup) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            ListNode* temp = preGroup->next;
            preGroup->next = kth;
            preGroup = temp;   
        }

        return dummy.next;  
    }
};