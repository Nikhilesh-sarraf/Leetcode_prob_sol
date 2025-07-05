// method-1


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
//       ListNode *t1=headA;
//         ListNode *t2=headB;
//         while(t1 != t2){
//             t1=t1->next;
//             t2=t2->next;

//             if(t1 == t2) return t1;

//             if(t1 == NULL) t1=headB;
//             if(t2 == NULL) t2=headA;
//         }
//         return t1;

//     }
// };



// method -2

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {

        int count1=0;
        ListNode *temp1=head1;
        int count2=0;
        ListNode *temp2=head2;
        
        
    while(temp1){
        count1++;
        temp1=temp1->next;
    }
    
    while(temp2){
        count2++;
        temp2=temp2->next;
    }
    
    while(count1>count2){
        count1--;
        head1=head1->next;
    }
    
     while(count2>count1){
         count2--;
        head2=head2->next;
    }
    
    while(head1&&head2&&head1!=head2){
        head1=head1->next;
        head2=head2->next;
    };
        if(head1&&head2)
        return head1;

        return NULL;
    
    }
};