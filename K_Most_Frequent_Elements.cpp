#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    priority_queue<pair<int, int>>q;
    map<int, int>mp;
    for(auto it: arr){
        mp[it]++;
    }
    for(auto it: mp){
        q.push({it.second, it.first});
    }
    vector<int>ans;
    while(!q.empty() && k--){
        ans.push_back(q.top().second);
        q.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
