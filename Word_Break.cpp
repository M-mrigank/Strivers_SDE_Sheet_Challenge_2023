#include <bits/stdc++.h> 
bool wordBreak(vector < string > & arr, int n, string & target) {
    // Write your code here.
    int i=0;
    while(i<arr.size()){
        if(target.find(arr[i])!=string::npos){
            target.erase(target.find(arr[i]), arr[i].size());
        }
        else{i++;}
    }
    return (target.empty())?true:false;
}
