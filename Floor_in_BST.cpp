#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void f(TreeNode<int>*root, int x, int& ans){
    if(!root){return;}
    if(root->val>x){
        f(root->left, x, ans);
    }
    else{
        if(root->val==x){
            ans=root->val;
            return;
        }
        else{
            ans=root->val;
        }
        f(root->right, x, ans);
    }
}
int floorInBST(TreeNode<int> * root, int x)
{
    // Write your code here.
    int ans=-1;
    if(!root){return ans;}
    f(root, x, ans);
    return ans;

}
