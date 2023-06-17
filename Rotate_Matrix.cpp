#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int i=0, j=0, mxn=n-1, mxm=m-1;
    while(i<mxn && j<mxm){
        int i1=i, j1=j, mxn1=mxn, mxm1=mxm;
        int curr=mat[i][j];
        j1++;
        // cout<<curr<<" "<<i1<<" "<<j1<<endl;
        while(j1<=mxm1){
            int temp=mat[i1][j1];
            // cout<<temp<<" r"<<endl;
            mat[i1][j1]=curr;
            curr=temp;
            j1++;
        }
        j1--;
        i1++;
        // cout<<curr<<" "<<i1<<" "<<j1<<endl;
        while(i1<=mxn1){
            int temp=mat[i1][j1];
            // cout<<temp<<" b"<<endl;
            mat[i1][j1]=curr;
            curr=temp;
            i1++;
        }
        i1--;
        j1--;
        // cout<<curr<<" "<<i1<<" "<<j1<<endl;
        while(j<=j1){
            int temp=mat[i1][j1];
            // cout<<temp<<" l"<<endl;
            mat[i1][j1]=curr;
            curr=temp;
            j1--;
        }
        j1++;
        i1--;
        while(i<=i1){
            int temp=mat[i1][j1];
            // cout<<temp<<" u"<<endl;
            mat[i1][j1]=curr;
            curr=temp;
            i1--;
        }
        i1++;
        // cout<<curr<<" "<<i1<<" "<<j1<<endl;
        // for(int i=0; i<n; i++){
            // for(int j=0; j<m; j++){cout<<mat[i][j]<<" ";}cout<<endl;
        // }cout<<endl;
        // cout<<"done"<<endl;
        i++;
        j++;
        mxn--;
        mxm--;
    }
}
