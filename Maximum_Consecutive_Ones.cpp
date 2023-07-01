int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int st= 0, en= 0, maxi = 0, flip = 0;
    while(en< n){
        if(arr[en] == 0){
            flip++;
        }
        while(flip > k){
            if(arr[st] == 0){
                flip--;
            }
            st++;
        }
        maxi = max(maxi, en-st+1);
        en++;
    }
    return maxi;
}
