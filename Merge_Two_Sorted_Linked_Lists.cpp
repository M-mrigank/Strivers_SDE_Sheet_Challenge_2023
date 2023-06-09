#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    vector<int>v1, v2;
    auto f=[&](vector<int>&v, Node<int>*n)->void{
        while(n){
            v.push_back(n->data);
            n=n->next;
        }
    };
    f(v1, first);
    f(v2, second);
    for(int i=0; i<v1.size(); i++){
        v2.push_back(v1[i]);
    }
    sort(v2.begin(), v2.end());
    Node<int>*root=NULL;
    for(int i=v2.size()-1; i>=0; i--){
        Node<int>*temp=new Node<int>(-1);
        temp->data=v2[i];
        temp->next=root;
        root=temp;
    }
    return root;
}
