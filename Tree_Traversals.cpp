#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void traversal(BinaryTreeNode<int>*root, vector<int>&v1, vector<int>&v2, vector<int>&v3){
    if(!root){return;}
    v1.push_back(root->data);
    traversal(root->left, v1, v2, v3);
    v2.push_back(root->data);
    traversal(root->right, v1, v2, v3);
    v3.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<int>v1, v2, v3;
    vector<vector<int>>ans;
    traversal(root, v1, v2, v3);
    ans.push_back(v2);
    ans.push_back(v1);
    ans.push_back(v3);
    return ans;
}
