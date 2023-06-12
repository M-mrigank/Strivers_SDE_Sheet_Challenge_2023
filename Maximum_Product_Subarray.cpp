#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int pd=1, ans=-1e9;
	for(int i=0; i<arr.size(); i++){
		pd*=arr[i];
		ans=max(ans, pd);
		if(pd==0){
			pd=1;
		}
	}
	pd=1;
	for(int i=arr.size()-1; i>=0; i--){
		pd*=arr[i];
		ans=max(ans, pd);
		if(pd==0){
			pd=1;
		}
	}
	return ans;
}
