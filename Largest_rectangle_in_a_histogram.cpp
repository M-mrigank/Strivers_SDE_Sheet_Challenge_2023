 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   stack<int>s;
   int cnt=0, curr, tp;
   for(int i=0; i<heights.size(); i++){
     while(!s.empty() && heights[s.top()]>=heights[i]){
      tp=s.top();
      s.pop();
      curr=heights[tp]*(s.empty()?i:(i-s.top()-1));
      cnt= max(cnt,curr);
     }
     s.push(i);
   }
   while(!s.empty()){
    int topp=s.top();
    s.pop();
    int num=heights[topp]*(s.empty()?heights.size():(heights.size()-s.top()-1));
    cnt= max(cnt, num);
   }
   return cnt;
 }
