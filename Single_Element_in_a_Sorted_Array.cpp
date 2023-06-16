#include<bits/stdc++.h>
int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	if(arr.size()==1){return arr.back();}
	if(arr[0]!=arr[1]){
		return arr[0];
	}
	if(arr[arr.size()-1]!=arr[arr.size()-2]){
		return arr[arr.size()-1];
	}
	int i=0, j=arr.size()-1;
	if(j==0){return arr[0];}
	while(i<j){
		int mid=i+(j-i)/2;
		if(mid%2){
			if(arr[mid]==arr[mid-1]){
				i=mid+1;
			}
			else{
				j=mid-1;
			}
		}
		else{
			if(arr[mid]==arr[mid+1]){
				i=mid+2;
			}
			else{
				j=mid;
			}
		}
	}
	return arr[i];
}
