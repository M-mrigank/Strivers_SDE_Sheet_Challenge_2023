#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long ans=0;
    long arr1[n], arr2[n];
    arr1[0]=arr[0];
    for(int i=1; i<n; i++){
        arr1[i]=max(arr1[i-1], arr[i]);
    }
    arr2[n-1]=arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
      arr2[i] = max(arr2[i + 1], arr[i]);
    }
    for(int i=1; i<n-1; i++){
        ans+=min(arr1[i], arr2[i])-arr[i];
    }
    return ans;
}
