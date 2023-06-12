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
string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
    string ans="";
    if(!root){return ans;}
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* rt=q.front();
        q.pop();
        if(!rt){
            ans+='#';
            ans+=',';
        }
        else{
            ans+=to_string(rt->data);
            ans+=',';
            q.push(rt->left);
            q.push(rt->right);
        }
    }
    return ans;

}

TreeNode<int>* deserializeTree(string &serialized)
{
 //    Write your code here for deserializing the tree
    if(serialized.empty()){return NULL;}
    string ans="";
    stringstream x(serialized);
    getline(x, ans, ',');
    TreeNode<int>*root=new TreeNode<int>(stoi(ans));
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>*rt=q.front();
        q.pop();
        getline(x, ans, ',');
        if(ans=="#"){
            rt->left=NULL;
        }
        else{
            rt->left=new TreeNode<int>(stoi(ans));
            q.push(rt->left);
        }
        getline(x, ans, ',');
        if(ans=="#"){
            rt->right=NULL;
        }
        else{
            rt->right=new TreeNode<int>(stoi(ans));
            q.push(rt->right);
        }
    }
    return root;
}



