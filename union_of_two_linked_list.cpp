class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
    
        set<int> st;
        Node* curr=head1;
        while(curr){
            st.insert(curr->data);
            curr=curr->next;
        }
        curr=head2;
        while(curr){
            st.insert(curr->data);
            curr=curr->next;
        }
        
        Node* head=NULL;
        curr=NULL;
        for(auto i:st){
        if(head==NULL){
          head=new Node(i);
          curr=head;
        }
        else{
            curr->next=new Node(i);
            curr=curr->next;
        }
        }
        return head;
    }
};