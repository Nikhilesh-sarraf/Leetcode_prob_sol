class Solution {
public:
    // Helper function for recursion
    int helper(Node* temp) {
        if (temp == NULL) {
            return 1;
        }

        int carry = helper(temp->next);
        temp->data = temp->data + carry;

        if (temp->data < 10) {
            return 0;
        } else {
            temp->data = 0;
            return 1;
        }
    }

    // Main function to add one to the number
    Node* addOne(Node* head) {
        int carry = helper(head);

        if (carry == 1) {
            Node* newnode = new Node(1);
            newnode->next = head;
            return newnode;
        }

        return head;
    }
};







//approach 2

class Solution {
public:

    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;   // New head after reversal
    }

    Node* addOne(Node* head)
    {
        head = reverse(head);           // Step 1: Reverse the list
        Node* temp = head;
        int carry = 1;                  // We're adding 1

        while (temp != NULL)
        {
            temp->data = temp->data + carry;

            if (temp->data < 10)
            {
                carry = 0;              // No carry needed
                break;
            }
            else
            {
                temp->data = 0;         // Set to 0 and continue carry
                carry = 1;
            }

            temp = temp->next;
        }

        if (carry == 1)
        {
            Node* newNode = new Node(1);     // Extra carry remains
            head = reverse(head);
            newNode->next = head;
            return newNode;
        }

        head = reverse(head);          // Final reverse to original order
        return head;
    }
};
