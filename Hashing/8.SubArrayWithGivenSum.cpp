/*
 Problem name : Subarray with given sum : 
 
 ip : arr[]={1,4,13,6,3,-10,5};
      sum =22
 op : yes (it has zero sum Subarray (13,6,3)).
 
 if not present then print NO:
 
 Naive Solution : Time O(n^2) space : O(1):
 i would like to try all Subarray then compaire it has equal to given sum or not :
 
 Efficient Solution :Time : O(n) Space : O(n);
 
 use hashMap and prefix sum concept.
 search (presum) in hashMap.
 
 a1 a2 a3 a4.       ai-1. ai ----ai+1===sum;
 ----------preSum-------||-----presum2--\
 
 presum2+sum=presum
 
 we need to cheak "prefix_Sum-sum" exits among prefix sum.
 
 
 
*/
#include <bits/stdc++.h>
using namespace std;

//Navie Solution :

bool isSumSubarray(vector<int> &arr, int sum){
	for(int i=0; i<arr.size(); i++){
		int currSum=0;
		for(int j=i; j<arr.size(); j++){
			currSum+=arr[j];
			if(currSum==sum){
				return true;
			}
		}
	}
	return false;
}

//Efficient Solution :
bool isSumSubarrayO(vector<int> &arr, int sum){
	unordered_set<int>h;
	int preSum=0;
	for(int i=0; i<arr.size(); i++){
		preSum+=arr[i];
		if(preSum==sum){
			return true;
		}
		if(h.find(preSum-sum)!=h.end()){
			return true;
		}
		h.insert(preSum);
	}
	return false;
}



int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={5,8,6,13,3,-1};
	cout<<isSumSubarray(v,22)<<endl;
	cout<<isSumSubarrayO(v, 22)<<endl;
	return 0;
}
