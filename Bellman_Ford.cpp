#include <bits/stdc++.h> 
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int>v(n, 1e9);
    // sort(edges.begin(), edges.end());
    v[src-1]=0;
    for(int i=0; i<n; i++){
        for(auto it: edges){
            if(v[it[0]-1]+it[2]<v[it[1]-1] && v[it[0]-1]!=1e9){
                v[it[1]-1]=v[it[0]-1]+it[2];
            }
        }
    }
    for(auto it: edges){
        if(v[it[0]-1]+it[2]<v[it[1]-1] && v[it[0]-1]!=1e9){
            return -1;
        }
    }
    return v[dest-1];
}
