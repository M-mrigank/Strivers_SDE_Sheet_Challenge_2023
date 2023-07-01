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

pair<bool,int> Balancefast(BinaryTreeNode<int>* root){

    if(root == NULL){

        pair<bool,int> p= make_pair(true,0);

        return p;

    }

    pair<bool,int> L = Balancefast(root->left);

    pair<bool,int> R = Balancefast(root->right);

    bool condition = abs(L.second - R.second)<=1;

    pair<bool,int> ans;

    ans.second= max(L.second,R.second) +1;

    if(L.first && R.first && condition ){

    ans.first=true;

    }

    else {

        ans.first=false;

    }

    return ans;

 

}

bool isBalancedBT(BinaryTreeNode<int>* root) {

    pair<bool,int> ans = Balancefast(root);

    return ans.first;

 

    // Write your code here.

}
