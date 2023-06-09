/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
 #include<bits/stdc++.h>
TreeNode<int>* formtree(vector<int>&inorder, int inst, int inen, vector<int>& postorder, int post, int poen, map<int, int>&mp){
     if(post>poen || inst>inen){return NULL;}
     TreeNode<int>* root=new TreeNode<int>(postorder[poen]);
     int pos=mp[postorder[poen]];
     int rem=pos-inst;
     root->left=formtree(inorder, inst, pos-1, postorder, post, post+rem-1, mp);
     root->right=formtree(inorder, pos+1, inen, postorder, post+rem, poen-1, mp);
     return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     map<int, int>mp;
     for(int i=0; i<inOrder.size(); i++){
          mp[inOrder[i]]=i;
     }
     TreeNode<int>*root=formtree(inOrder, 0, inOrder.size()-1, postOrder, 0, postOrder.size()-1, mp);
     return root;
}
