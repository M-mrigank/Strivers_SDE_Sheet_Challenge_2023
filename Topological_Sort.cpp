#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int>adj[v];
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
    }
    vector<int>vec(v, 0);
    for(int i=0; i<v; i++){
        for(auto it: adj[i]){
            vec[it]++;
        }
    }
    vector<int>ans;
    queue<int>q;
    for(int i=0; i<v; i++){
        if(!vec[i]){
            q.push(i);
            // ans.push_back(i);
        }
    }
    while(!q.empty()){
        int num=q.front();
        q.pop();
        ans.push_back(num);
        for(auto it: adj[num]){
            vec[it]--;
            if(vec[it]==0){
                q.push(it);
            }
        }
    }
    return ans;
}
