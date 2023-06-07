#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		vector<pair<int, int>>s;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(s.empty()){s.push_back({num, num});}
			else{
				s.push_back({num, min(num, s.back().second)});
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			int tp=s.back().first;
			s.pop_back();
			return tp;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			return s.back().first;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			
			return s.back().second;
		}
};
