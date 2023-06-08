#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int i=0, j=n-1, ans=-1;
	sort(arr.begin(), arr.end());
	while(i<=j){
		int mid=i+(j-i)/2;
		if(arr[mid]<mid+1){
			ans=arr[mid];
			j=mid-1;
		}
		else{
			i=mid+1;
		}
	}
	return ans;
}
