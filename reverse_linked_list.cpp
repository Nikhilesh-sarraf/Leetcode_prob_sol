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
        ListNode * pre=NULL;
        ListNode * next1=head; 
        ListNode * temp=head;
        while(next1){
            next1=next1->next;
            temp->next=pre;
            pre=temp;
            temp=next1;
        }
        return pre;


    }
};