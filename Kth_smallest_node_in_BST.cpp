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

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
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
    if(ans.size()<k){return -1;}
    return ans[k-1];
}
