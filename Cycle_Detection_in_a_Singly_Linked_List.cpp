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
bool detectCycle(Node *head)
{
	//	Write your code here
    Node* n1=head;
    Node* n2=head;
    while(n2!=NULL && n2->next!=NULL){
        n1=n1->next;
        n2=n2->next->next;
        if(n1==n2){
            return true;
        }
    }
    return false;
}
