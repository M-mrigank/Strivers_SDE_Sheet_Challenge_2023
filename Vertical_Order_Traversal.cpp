#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here. 
    vector<int>ans;
    map<int, vector<int>>mp;
    queue<pair<TreeNode<int>*, int>>q;
    q.push({root, 0});
    while(!q.empty()){
        root=q.front().first;
        int pos=q.front().second;
        q.pop();
        mp[pos].push_back(root->data);
        if(root->left){
            q.push({root->left, pos-1});
        }
        if(root->right){
            q.push({root->right, pos+1});
        }
    }
    for(auto it: mp){
        for(auto it1: it.second){
            ans.push_back(it1);
        }
    }
    return ans;
    
}
