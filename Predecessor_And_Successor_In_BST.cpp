#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void f(BinaryTreeNode<int>* root, vector<int>&inorder){
    if(!root){
        return;
    }
    f(root->left, inorder);
    inorder.push_back(root->data);
    f(root->right, inorder);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    if(!root){
        return make_pair(-1, -1);
    }
    vector<int>inorder;
    f(root, inorder);
    int pos=find(inorder.begin(), inorder.end(), key)-inorder.begin();
    // for(auto it: inorder){cout<<it<<" ";}cout<<endl;
    if(inorder.size()==1){
        return make_pair(-1, -1);
    }
    if(pos==0){
        return make_pair(-1, inorder[pos+1]);
    }
    if(pos==inorder.size()-1){
        return make_pair(inorder[pos-1], -1);
    }
    return make_pair(inorder[pos-1], inorder[pos+1]);
}
