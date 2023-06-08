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

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    if(root==NULL){return ans;}
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int l=q.size();
        for(int i=0; i<l; i++){
            if(i==0){
                ans.push_back(q.front()->data);
            }
            TreeNode<int>* rt=q.front();
            q.pop();
            if(rt->left!=NULL){
                q.push(rt->left);
            }
            if(rt->right!=NULL){
                q.push(rt->right);
            }
        }
    }
    return ans;
}
