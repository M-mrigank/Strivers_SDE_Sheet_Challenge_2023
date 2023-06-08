#include <bits/stdc++.h> 
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

TreeNode<int> *formtree(vector<int>&inorder, int inst, int inen, vector<int>&preorder, int prest, int preen, map<int, int>&mp){
    if(inst>inen || prest>preen){
        return NULL;
    }
    TreeNode<int> *rt=new TreeNode<int>(preorder[prest]);
    int pos=mp[preorder[prest]];
    int rem=pos-inst;
    rt->left=formtree(inorder, inst, pos-1, preorder, prest+1, prest+rem, mp);
    rt->right=formtree(inorder, pos+1, inen, preorder, prest+rem+1, preen, mp);
    return rt;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    map<int, int>mp;
    for(int i=0; i<inorder.size(); i++){
        mp[inorder[i]]=i;
    }
    TreeNode<int>* root=formtree(inorder, 0, inorder.size()-1, preorder, 0, preorder.size()-1, mp);
    return root;
}
