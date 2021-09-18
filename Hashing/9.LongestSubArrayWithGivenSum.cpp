/*
Problem : Longest Subarray with given Sum : 
 ip : arr[]={3,1,0,1,8,2,3,6};
      sum =5. 
      op : 4 (3,1,0,1).  not (2,3)
      
      
    Naive Solution : Time O(n^2) Space O(1)
    
    cheak all Subarray is length is greater than previous then update:
    
    Efficient Solution : Time O(n) Space : O(n).
     Use unordered map and store presum and index as well.
     
     let's see implementation : 

*/


#include <bits/stdc++.h>
using namespace std;


//Naive Solution :
int maxLen(vector<int>& arr, int sum){
	int res=0;
	for(int i=0; i<arr.size(); i++){
		int currSum=0;
		for(int j=i; j<arr.size(); j++){
			currSum+=arr[j];
			if(currSum==sum){
				res=max(res, j-i+1);
			}
		}
	}
	return res;
}

//Efficient Solution : 

int maxLenO(vector<int>&arr, int sum){
	int res=0;
	unordered_map<int, int>mp;
	int preSum=0;
	for(int i=0; i<arr.size(); i++){
		preSum+=arr[i];
		if(preSum==sum){
			res=i+1;
		}
		if(mp.find(preSum)==mp.end()){
			mp.insert({preSum, i});
		}
		if(mp.find(preSum-sum)!=mp.end()){
			res=max(res, i-mp[preSum-sum]);
		}
	}
	return res;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={3,1,0,1,8,2,3,6};
	cout<<maxLen(v, 5)<<endl;
	cout<<maxLenO(v,5)<<endl;
	return 0;
}
