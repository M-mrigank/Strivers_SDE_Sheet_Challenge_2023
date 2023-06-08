#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int>ans;
    vector<int>v(vertex, 0);
    vector<set<int>>adj(vertex);
    for(auto it: edges){
        adj[it.first].insert(it.second);
        adj[it.second].insert(it.first);
    }
    for(int i=0; i<vertex; i++){
        if(!v[i]){
            queue<int>q;
            v[i]=1;
            q.push(i);
            while(!q.empty()){
                int num=q.front();
                q.pop();
                ans.push_back(num);
                for(auto it: adj[num]){
                    if(!v[it]){
                        v[it]=1;
                        q.push(it);
                    }
                }
            }
        }
    }
    return ans;
}
