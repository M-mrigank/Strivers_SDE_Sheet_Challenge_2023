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
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    if(!secondHead || !firstHead){return NULL;}
    set<Node*>v1, v2;
    while(firstHead){
        v1.insert(firstHead);
        firstHead=firstHead->next;
    }
    while(secondHead){
        if(v1.find(secondHead)!=v1.end()){
            return secondHead;
        }
        secondHead=secondHead->next;
    }
    return NULL;
}
