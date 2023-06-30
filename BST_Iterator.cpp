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

class BSTiterator
{
    // TreeNode<int>* node=NULL;
    public:
    stack<TreeNode<int>*>s;
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        // node=new TreeNode<int>(-1);
        while(root){
            s.push(root);
            root=root->left;
        }
    }

    int next()
    {
        // write your code here
        TreeNode<int>*temp=s.top();
        s.pop();
        TreeNode<int>*temp1=temp->right;
        while(temp1){
            s.push(temp1);
            temp1=temp1->left;
        }
        return temp->data;
        
    }

    bool hasNext()
    {
        // write your code here
        return !s.empty();
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
