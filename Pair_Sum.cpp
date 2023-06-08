#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   sort(arr.begin(), arr.end());
   vector<vector<int>>ans;
   int i=0, j=arr.size()-1;
   while(i<arr.size()){
      if(i==j){
         j=arr.size()-1;
         i++;
      }
      else if(arr[i]+arr[j]==s){
         vector<int>temp;
         temp.push_back(arr[i]);
         temp.push_back(arr[j]);
         ans.push_back(temp);
         if(i==j){
            j=arr.size()-1;
            i++;
         } else {
           j--;
         }
      }
      else{
         if(i==j){
            j=arr.size()-1;
            i++;
         } else {
           j--;
         }
      }
   }
   return ans;
}
