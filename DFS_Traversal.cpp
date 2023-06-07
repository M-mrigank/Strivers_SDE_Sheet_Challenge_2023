#include<bits/stdc++.h>
void dfs(int i, vector<int>&temp, vector<int>&v, vector<int>adj[]){
    v[i]=1;
    temp.push_back(i);
    for(auto it: adj[i]){
        if(!v[it]){
            dfs(it, temp, v, adj);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>>ans;
    vector<int>v(V, 0);
    vector<int>adj[V];
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    for(int i=0; i<V; i++){
        if(!v[i]){
            vector<int>temp;
            dfs(i, temp, v, adj);
            ans.push_back(temp);
        }
    }
    return ans;
}
