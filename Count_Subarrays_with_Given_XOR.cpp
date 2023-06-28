#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int, int>mp;
    int cnt=0, sum=0;
    for(int i=0; i<arr.size(); i++){
        sum^=arr[i];
        if(sum==x){
            cnt++;
        }
        if(mp.find(sum^x)!=mp.end()){
            cnt+=mp[sum^x];
        }
        mp[sum]++;
    }
    return cnt;
}
