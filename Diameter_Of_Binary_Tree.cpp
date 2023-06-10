/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
int chk(int& cnt, TreeNode<int>*root){
    if(!root){
        return 0;
    }
    int l=chk(cnt, root->left);
    int r=chk(cnt, root->right);
    cnt=max(cnt, l+r);
    return 1+max(l, r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int cnt=0;
    if(!root){
        return 0;
    }
    chk(cnt, root);
    return cnt;
}
