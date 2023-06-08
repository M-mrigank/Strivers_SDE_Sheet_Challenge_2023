#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    map<int, int>mp;
    vector<int>ans;
    if(!root){return ans;}
    queue<pair<TreeNode<int>*, int>>q;
    q.push({root, 0});
    while(!q.empty()){
        root=q.front().first;
        int pos=q.front().second;
        q.pop();
        if(mp.find(pos)==mp.end()){
            mp[pos]=root->val;
        }
        if(root->left){
            q.push({root->left, pos-1});
        }
        if(root->right){
            q.push({root->right, pos+1});
        }
    }
    for(auto it: mp){
        ans.push_back(it.second);
    }
    return ans;
}
