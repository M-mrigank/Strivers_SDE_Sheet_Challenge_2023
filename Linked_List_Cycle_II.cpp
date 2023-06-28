/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
#include<bits/stdc++.h>
Node *firstNode(Node *head)
{
    //    Write your code here.
    if(!head || !head->next){return NULL;}
    map<Node*, int>mp;
    while(head->next){
        if(mp.count(head)==0){
            mp[head]=1;
            head=head->next;
        }
        else{
            return head;
        }
    }
    return NULL;
}
