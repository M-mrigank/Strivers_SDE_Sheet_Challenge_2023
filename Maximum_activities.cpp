#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int, int>>v;
    for(int i=0; i<finish.size(); i++){
        v.push_back({finish[i], start[i]});
    }
    int cnt=0, prv=-1;
    sort(v.begin(), v.end());
    for(int i=0; i<start.size(); i++){
        if(v[i].second>prv-1){cnt++; prv=v[i].first;}
    }
    return cnt;
}
