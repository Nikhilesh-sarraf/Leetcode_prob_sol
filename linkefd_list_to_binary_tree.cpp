/*
// Link list Node
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    TreeNode* linkedListToBinaryTree(Node* head) {
        // code here
        if(head==NULL)
        return NULL;
        
        queue<TreeNode *>q;
        TreeNode * root=new TreeNode(head->data);
        q.push(root);
        head=head->next;
        
        while(head){
            
            TreeNode * front=q.front();
            q.pop();
            
            
            //left node of the true
            front->left=new TreeNode(head->data);
            q.push(front->left);
            head=head->next;
            
            
            //right node of the tree
            if(head)
            {
            front->right=new TreeNode(head->data);
            q.push(front->right);
            head=head->next;
            }
            
        }
        return root;
    }
};