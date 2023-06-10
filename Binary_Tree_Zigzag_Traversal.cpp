#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    int chk=1;
    queue<BinaryTreeNode<int>*>q;
    vector<int>ans;
    if(!root){return ans;}
    q.push(root);
    while(!q.empty()){
        int l=q.size();
        vector<int>temp;
        for(int i=0; i<l; i++){
            root=q.front();
            q.pop();
            temp.push_back(root->data);
            if(root->left){q.push(root->left);}
            if(root->right){q.push(root->right);}
        }
        if(chk==-1){
            chk=1;
            reverse(temp.begin(), temp.end());
        }
        else{chk=-1;}
        for(int i=0; i<temp.size(); i++){ans.push_back(temp[i]);}
    }
    return ans;
}
