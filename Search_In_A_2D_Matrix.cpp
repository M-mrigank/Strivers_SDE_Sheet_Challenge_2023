bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(), m=mat[0].size(), i=0, j=n*m-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int r=mid/m, c=mid%m;
            if(mat[r][c]==target){return true;}
            else if(mat[r][c]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return false;
}
