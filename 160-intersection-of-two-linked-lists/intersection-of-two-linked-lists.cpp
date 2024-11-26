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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set <ListNode*> set;
        ListNode* current = headA;

        while(current){
            set.insert(current);
            current = current->next;
        }

        ListNode* curr2 = headB;

        while(curr2)
        {
            if(set.find(curr2) != set.end())
            return curr2;

            curr2 = curr2->next;
        }
        return nullptr;
    }
};