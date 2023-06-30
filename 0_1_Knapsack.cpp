#include<bits/stdc++.h>
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<int> dp(w+1,0);
	for(int i=weights[0]; i<=w; i++){
		dp[i] = values[0];
	}
	for(int i=1; i<n; i++){
		for(int j=w; j>=0; j--){
			int nt= 0 + dp[j], t=-1e9;
			if(weights[i] <= j)
				t= values[i] + dp[j - weights[i]];
			dp[j] = max(nt, t);
		}
	}
	return dp[w];
}
