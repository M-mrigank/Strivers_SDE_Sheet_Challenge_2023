#include<bits/stdc++.h>
unordered_map<char, int> mp = {{'(', 1},  {'[', 2},  {'{', 3}, {')', -1}, {']', -2}, {'}', -3}};
bool isValidParenthesis(string expression) {
  // Write your code here.
  stack<char>s;
  for(int i=0; i<expression.size(); i++){
      if(s.empty()){
          if(mp[expression[i]]<0){
              return false;
          }
          else{
              s.push(expression[i]);
          }
      }
      else{
          if(mp[expression[i]]<0){
            int tp=mp[s.top()];
            if(tp+mp[expression[i]]==0){
                s.pop();
            } else {
                // cout << s.top() << " here " << expression[i] << endl;
                return false;
            }
          }
          else{
              s.push(expression[i]);
          }
      }
  }
  if(!s.empty()){return false;}
  return true;
}
