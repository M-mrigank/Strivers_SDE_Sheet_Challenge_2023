#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void f(BinaryTreeNode<int>*root, int x, int&ans){
    if(!root){
        return;
    }
    if(root->data<x){
        f(root->right, x, ans);
    }
    else{
        if(root->data==x){
            ans=x;
            return;
        }
        else if(root->data>x){
            ans=root->data;
        }
        f(root->left, x, ans);
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=-1;
    if(!node){
        return ans;
    }
    f(node, x, ans);
    return ans;
}
