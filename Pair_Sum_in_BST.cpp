#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int>v;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        q.pop();
        v.push_back(root->data);
        if(root->left){
            q.push(root->left);
        }
        if(root->right){
            q.push(root->right);
        }
    }
    int i=0, j=v.size()-1;
    sort(v.begin(), v.end());
    while(i<j){
        if(v[i]+v[j]==k && v[i]!=v[j]){
            return true;
        }
        else if(v[i]+v[j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
