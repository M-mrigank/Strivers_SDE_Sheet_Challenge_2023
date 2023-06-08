#include<bits/stdc++.h>
void dfs1(int i, stack<int>&s, vector<int>&v, vector<int>adj[]){
    v[i]=1;
    for(auto it: adj[i]){
        if(!v[it]){
            dfs1(it, s, v, adj);
        }
    }
    s.push(i);
}
void dfs2(int i, vector<int>&temp, vector<int>&v, vector<int>adj[]){
    v[i]=1;
    temp.push_back(i);
    for(auto it: adj[i]){
        if(!v[it]){
            dfs2(it, temp, v, adj);
        }
    }
}
vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges)
{
    // Write your code here.
    vector<int>adj[n], adj1[n];
    vector<vector<int>>ans;
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
        adj1[it[1]].push_back(it[0]);
    }
    vector<int>v(n, 0);
    stack<int>s;
    for(int i=0; i<n; i++){
        if(!v[i]){
            dfs1(i, s, v, adj);
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){v[i]=0;}
    while(!s.empty()){
        int i=s.top();
        s.pop();
        if(!v[i]){
            cnt++;
            vector<int>temp;
            dfs2(i, temp, v, adj1);
            ans.push_back(temp);
        }
    }
    // cout<<cnt<<endl;
    return ans;
}
