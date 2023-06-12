#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
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

int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    vector<int>ans;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        q.pop();
        ans.push_back(root->data);
        if(root->left){
            q.push(root->left);
        }
        if(root->right){
            q.push(root->right);
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    if(ans.size()<k){return -1;}
    return ans[k-1];
}
