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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode * temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
         temp=head;
        int mid=count/2;
        for(int i=1;i<=mid;i++){
          temp=temp->next;
        }
        head=temp;
        return head;
    }
};