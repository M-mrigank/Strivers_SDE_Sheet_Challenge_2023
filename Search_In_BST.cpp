#include <bits/stdc++.h> 
/*
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
    };
*/
bool f(BinaryTreeNode<int> *root, int x){
    if(!root){return false;}
    if(root->data>x){
        f(root->left, x);
    }
    else{
        if(root->data==x){
            return true;
        }
        else{f(root->right, x);}
    }
}
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    return f(root, x);
}
