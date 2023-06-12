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
TreeNode<int>* formbst(int i, int j, vector<int>&arr){
    if(j<i){return NULL;}
    int num=i+(j-i)/2;
    TreeNode<int>*root=new TreeNode<int>(arr[num]);
    root->left=formbst(i, num-1, arr);
    root->right=formbst(num+1, j, arr);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return formbst(0, n-1, arr);

}
