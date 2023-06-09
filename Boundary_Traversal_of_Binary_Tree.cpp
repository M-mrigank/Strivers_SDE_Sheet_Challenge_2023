#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isleaf(TreeNode<int>*r){
    return !r->left && !r->right;
}
void bottom(TreeNode<int>*rt, vector<int>&ans){
    if(isleaf(rt)){
        ans.push_back(rt->data);
        return;
    }
    if(rt->left){
        bottom(rt->left, ans);
    }
    if(rt->right){
        bottom(rt->right, ans);
    }
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    TreeNode<int>*rt=root;
    vector<int>ans, temp;
    if (!root) {
      return ans;
    }
    if(!isleaf(root)){
        ans.push_back(root->data);
    }
    rt=rt->left;
    while(rt){
        if(!isleaf(rt)){
            ans.push_back(rt->data);
        }
        if(rt->left){
            rt=rt->left;
        }
        else{
            rt=rt->right;
        }
    }
    bottom(root, ans);
    rt=root;
    rt=rt->right;
    while(rt){
        if(!isleaf(rt)){
            temp.push_back(rt->data);
        }
        if(rt->right){
            rt=rt->right;
        }
        else{
            rt=rt->left;
        }
    }
    reverse(temp.begin(), temp.end());
    for(auto it: temp){
        ans.push_back(it);
    }
    return ans;
}
