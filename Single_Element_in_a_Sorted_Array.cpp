int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int ans=0;
	for(int i=0; i<arr.size(); i++){
		ans^=arr[i];
	}
	return ans;
}
