#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int>ans;
    priority_queue<int, vector<int>, greater<int>>minh;
    for(int i=0; i<n; i++){
        if(q[i][0]==0){
            minh.push(q[i][1]);
        }
        else{
            ans.push_back(minh.top());
            minh.pop();
        }
    }
    return ans;
}
