#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>dp(n, vector<long long int>(n, 0));
  for(int i=0; i<n; i++){
    dp[i][0]=1;
    dp[i][i]=1;
  }
  for(int i=2; i<n; i++){
    for(int j=1; j<n; j++){
      dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
    }
  }
  vector<vector<long long int>>ans;
  for(int i=0; i<n; i++){
    vector<long long int>temp;
    for(int j=0; j<n && dp[i][j]; j++){
      temp.push_back(dp[i][j]);
    }
    ans.push_back(temp);
  }
  return ans;
}
