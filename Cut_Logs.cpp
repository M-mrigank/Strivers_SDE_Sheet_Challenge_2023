#include<bits/stdc++.h>
int cutLogs(int k, int n)
{
    // Write your code here.
    int cnt=0;
    vector<int>dp(k+1, 0);
    while(dp[k] < n) {
        cnt++;
        for(int i = k; i > 0; i--){
            dp[i]+=dp[i-1]+1;
        }
    }
    return cnt;
}
