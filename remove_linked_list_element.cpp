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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * list=new ListNode(0);
        if(head==NULL)
        return head;
        ListNode *temp=list;
        while(head){
            if(head->val==val)
            {
                head=head->next;
            }
            else
            {
            temp->next=head;
            head=head->next;
            temp=temp->next;
            }
        }
        temp->next = NULL;
        return list->next;
    }
};