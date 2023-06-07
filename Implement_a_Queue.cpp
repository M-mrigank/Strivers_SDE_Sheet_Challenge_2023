#include <bits/stdc++.h> 
class Queue {
public:
vector<int>v;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return v.empty();
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        v.push_back(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){return -1;}
        int ft=v[0];
        v.erase(v.begin());
        return ft;
    }

    int front() {
        // Implement the front() function
        if(isEmpty()){return -1;}
        return v[0];
    }
};
