#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    int st=intervals[0][0], en=intervals[0][1];
    vector<vector<int>>ans;
    for(auto it: intervals){
        if(it[0]<=en){
            en=max(en, it[1]);
        }
        else{
            vector<int>t;
            t.push_back(st);
            t.push_back(en);
            ans.push_back(t);
            st=it[0];
            en=it[1];
        }
    }
    vector<int>t;
    t.push_back(st);
    t.push_back(en);
    ans.push_back(t);
    return ans;
}
