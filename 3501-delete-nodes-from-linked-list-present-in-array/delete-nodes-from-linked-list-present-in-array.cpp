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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

        while(head != nullptr && st.count(head->val) == 1)
        {
            head = head->next;
        }

        ListNode* temp = head;
        ListNode* prev = head;
        while(temp != nullptr)
        {
            if(st.count(temp->val) == 1)
            {
                prev->next = temp->next;
            }
            else
            {
                prev = temp;
            }
            temp = temp -> next;
        }
        return head;
    }
};