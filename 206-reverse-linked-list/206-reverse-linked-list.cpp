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
        vector<int>arr;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
       while(arr.size()!=0)
        {
            curr->val=arr.back();
            arr.pop_back();
            curr=curr->next;
        }
        return head;
    }
};