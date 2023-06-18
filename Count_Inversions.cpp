#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long i=0, j=n-1, cnt=0;
    while(i!=j){
        if(i+1==j){
            if(arr[i]>arr[j]){
                cnt++;
            }
            j=n-1;
            i++;
        }
        if(arr[i]>arr[j]){
            cnt++;
            j--;
        }
        else{
            j--;
        }
    }
    return cnt;
}
