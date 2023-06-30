#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	priority_queue<int> maxHeap;
    priority_queue<int , vector<int> , greater<int>> minHeap;

    if(n == 1){
        return {arr[0]};
    }
    if(n == 2){
        return { min(arr[0] , arr[1] ) , (arr[0] + arr[1])/2};
    }

    minHeap.push(max(arr[0] , arr[1]));
    maxHeap.push(min(arr[0] , arr[1]));

    vector<int> ans;

    ans.push_back(arr[0]);
    ans.push_back((arr[0] + arr[1])/2);

    int size1 = 1;
    int size2 = 1;

    for(int i = 2 ; i < n ; i++){
        if(arr[i] < minHeap.top()){
            maxHeap.push(arr[i]);
            size1++;
        }
        else{
            minHeap.push(arr[i]);
            size2++;
        }

        if(abs(size1 - size2) >= 2){
            if(size1 > size2){
                size1--;
                size2++;
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else{
                size1++;
                size2--;
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }

        if((size1 + size2)%2 == 0){

            ans.push_back(  (minHeap.top() + maxHeap.top())/2  );
        }
        else{
            int target = (size1 + size2)/2 + 1;

            if(size1 == target){
                ans.push_back(maxHeap.top());
            }
            else{
                ans.push_back(minHeap.top());
            }
        }
    }
    return ans;
}
