#include<bits/stdc++.h>
bool safe(int r, int c, int val, vector<vector<int>>& matrix, int n, int m){
    int row=r, col=c;
    for(int i=0; i<9; i++){
        if(matrix[row][i]==val || matrix[i][col]==val || matrix[(3*(row/3))+i/3][(3*(col/3))+i%3]==val){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<int>>&matrix, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
                for(int k=1; k<10; k++){
                    if(safe(i, j, k, matrix, n, m)){
                        matrix[i][j]=k;
                        if(solve(matrix, n, m)){return true;}
                        else{matrix[i][j]=0;}
                    }
                }
                return false;
            }
        }
    }
    return true;
}
bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    vector<vector<int>>v(9, vector<int>(9, 0));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            v[i][j]=matrix[i][j];
        }
    }
    return solve(v, 9, 9);
}
