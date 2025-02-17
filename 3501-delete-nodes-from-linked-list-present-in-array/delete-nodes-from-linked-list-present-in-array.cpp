#include <vector>
#include <algorithm>  // For binary_search

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(), nums.end());  
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* nxt = head;

        while (nxt != nullptr) {
            if (binary_search(nums.begin(), nums.end(), nxt->val)) {
                prev->next = nxt->next; 
                nxt = nxt->next;
            } else {
                prev = nxt;
                nxt = nxt->next;
            }
        }

        return dummy->next;
    }
};
