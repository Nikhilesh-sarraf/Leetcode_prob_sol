class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         if(left==right)
         return head;
        ListNode* first=head;
        ListNode* second=head;
        ListNode* secpre;
        ListNode* firpre = nullptr;  // Initialize to nullptr to avoid garbage
        
        for(int i=1;i<right;i++){

            if(i<left){
            firpre=first;
            first=first->next;
            }

            if(i<right)
            {
            second=second->next;
            }
        }
         secpre=second->next;
         second->next=NULL;
         second=first;
         ListNode* temp=secpre;
         while(second){
            second=second->next;
            first->next=temp;
            temp=first;
            first=second;
         }

         if (left == 1) {
             return temp;  // New head after reversing from start
         }

         firpre->next=temp;
         return head;
    }
};
