int cutRod(vector<int> &price, int n)
{
	// Write your code here.
    vector<vector<int>> dp(n, vector<int>(n+1, 0));
	vector<int> prev(n+1, 0), curr(n+1, 0);
    for(int N=0;N<=n;N++) prev[N]=N*price[0];
    for(int i=1; i<n; i++){
        for(int j=0; j<n+1; j++){
            int ntk= prev[j], tk= INT_MIN;
            if(i+1<=j){ 
				tk= price[i]+curr[j-(i+1)];
			}
            curr[j]=max(tk, ntk);
        }
        prev = curr;
    }
    return prev[n];
}
