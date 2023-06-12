#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
bool chk(BinaryTreeNode<int>*root, int p, char d){
    if(!root){
        return true;
    }
    if(d=='L'){
        if(p<root->data){
            return false;
        }
    }
    if(d=='R'){
        if(p>root->data){
            return false;
        }
    }
    int l=chk(root->left, root->data, 'L');
    int r=chk(root->right, root->data, 'R');
    return l && r;
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    if(!root){
        return true;
    }
    return chk(root, -1, '.');
}
