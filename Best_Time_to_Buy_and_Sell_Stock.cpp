#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini=prices[0], ans=INT_MIN;
    for(int i=1; i<prices.size(); i++){
        ans=max(ans, prices[i]-mini);
        mini=min(mini, prices[i]);
    }
    if(ans<0){return 0;}
    return ans;
}
