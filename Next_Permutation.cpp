#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int pos=0, curr=n-1, chk=1;
    for(int i=n-2; i>=0; i--){
        if(permutation[i]<permutation[i+1]){
            pos=i; chk=-1; break;
        }
    }
    if(chk==1){
        sort(permutation.begin(), permutation.end());
        return permutation;
    }
    for(int i=n-1; i>=0; i--){
        if(permutation[i]>permutation[pos]){
            swap(permutation[i], permutation[pos]);
            break;
        }
    }
    reverse(permutation.begin()+pos+1, permutation.end());
    return permutation;
}
