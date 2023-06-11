#include<bits/stdc++.h>
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    auto valid=[&](int i, int j, int n, int m)->bool{
        return i>=0 && j>=0 && i<n && j<m;
    };
    queue<pair<int, int>>q;
    q.push({x, y});
    int val=image[x][y];
    vector<vector<int>>v(image.size(), vector<int>(image[0].size(), 0));
    v[x][y]=1;
    while(!q.empty()){
        int px=q.front().first, py=q.front().second;
        q.pop();
        int r[4]={1, -1, 0, 0};
        int c[4]={0, 0, 1, -1};
        for(int k=0; k<4; k++){
            int row=r[k]+px, col=c[k]+py;
            if(valid(row, col, image.size(), image[0].size()) && !v[row][col] && image[row][col]==val){
                v[row][col]=1;
                image[row][col]=newColor;
                q.push({row, col});
            }
        }
    }
    image[x][y]=newColor;
    return image;
}
