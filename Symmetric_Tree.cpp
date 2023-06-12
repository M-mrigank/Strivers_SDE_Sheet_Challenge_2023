/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool sym(BinaryTreeNode<int>* l, BinaryTreeNode<int>* r){
    if(l==NULL || r==NULL){
        return l==r;
    }
    if(l->data!=r->data){return false;}
    return sym(l->left, r->right) && sym(l->right, r->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here. 
    return !root || sym(root->left, root->right);
}
