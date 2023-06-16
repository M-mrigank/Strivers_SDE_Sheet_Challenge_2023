#include<bits/stdc++.h>
int longestIncreasingSubsequence(int arr[], int n)
{
    // Write Your Code here
    vector<int>v;
    v.push_back(arr[0]);
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]>v.back()){
            cnt++;
            v.push_back(arr[i]);
        }
        else{
            int ind =lower_bound(v.begin(),v.end(),arr[i])-v.begin();
            v[ind]=arr[i];
        }
    }
    return cnt;

}
