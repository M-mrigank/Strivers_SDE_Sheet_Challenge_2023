#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    vector<int>v(vertices, 2e18);
    vector<pair<int, int>>adj[vertices];
    for(auto it: vec){
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    q.push({0, source});
    v[source]=0;
    while(!q.empty()){
        int num=q.top().second, wt=q.top().first;
        q.pop();
        for(auto it: adj[num]){
            if(v[it.first]>wt+it.second){
                v[it.first]=wt+it.second;
                q.push({v[it.first], it.first});
            }
        }
    }
    return v;
}
