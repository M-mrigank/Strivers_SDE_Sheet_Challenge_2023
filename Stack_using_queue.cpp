#include <bits/stdc++.h> 
class Stack {
	// Define the data members.

   public:
   queue<int>q1, q2;
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q1.empty();
    }

    void push(int element) {
        // Implement the push() function.
        q1.push(element);
    }

    int pop() {
        // Implement the pop() function.
        if(isEmpty()){return -1;}
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int num=q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return num;
    }

    int top() {
        // Implement the top() function.
        if(isEmpty()){return -1;}
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int num=q1.front();
        q2.push(q1.front());
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return num;
    }
};
