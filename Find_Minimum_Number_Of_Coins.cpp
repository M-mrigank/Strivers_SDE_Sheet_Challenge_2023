#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int cnt=0;
    while(amount>0){
        if(amount/1000!=0){
            cnt+=(amount/1000);
            amount%=1000;
        }
        else if(amount/500){
            cnt+=(amount/500);
            amount%=500;
        }
        else if(amount/100){
            cnt+=(amount/100);
            amount%=100;
        }
        else if(amount/50){
            cnt+=(amount/50);
            amount%=50;
        }
        else if(amount/20){
            cnt+=(amount/20);
            amount%=20;
        }
        else if(amount/10){
            cnt+=(amount/10);
            amount%=10;
        }
        else if(amount/5){
            cnt+=(amount/5);
            amount%=5;
        }
        else if(amount/2){
            cnt+=(amount/2);
            amount%=2;
        }
        else if(amount/1){
            cnt+=(amount/1);
            amount%=1;
        }
    }
    return cnt;
}
