#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int>ans;
    map<int, int>m;
    queue<pair<BinaryTreeNode<int> *, int>>q;
    q.push({root, 0});
    while(!q.empty()){
        root=q.front().first;
        int vert=q.front().second;
        q.pop();
        m[vert]=root->data;
        if(root->left!=NULL){q.push({root->left, vert-1});}
        if(root->right!=NULL){q.push({root->right, vert+1});}
    }
    for(auto it: m){
        ans.push_back(it.second);
    }
    return ans;
}
