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
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b)
        {
            a=a==NULL?headA:a->next;
            b=b==NULL?headB:b->next;
        }
        return a;
    }
};