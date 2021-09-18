/*
 Problem name : Subarray with zero sum : 
 
 ip : arr[]={1,4,13,-3,-10,5};
 op : yes (it has zero sum Subarray (13,-10,-3)).
 
 if not present then print NO:
 
 Naive Solution : Time O(n^2) space : O(1):
 i would like to try all Subarray then compaire it has equal to zero sum or not :
 
 Efficient Solution :Time : O(n) Space : O(n);
 
 use hashMap and prefix sum concept.
 search (presum) in hashMap.
 
 a1 a2 a3 a4.       ai-1. ai ----ai+1===0;
 ----------preSum-------||-----presum2--\
 
 presum2+0=presum
 
 
 
*/


#include <bits/stdc++.h>
using namespace std;

// Naive Solution : Time O(n^2) space : O(1):
bool isSum0Subarray(vector<int> &arr){
	for(int i=0; i<arr.size(); i++){
		int currSum=0;
		for(int j=i; j<arr.size(); j++){
			currSum+=arr[j];
			if(currSum==0){
				return true;
			}
		}
		
	}
	return false;
}

// Efficient Solution

bool isSubarrayWith0Sum(vector<int> &arr){
	int n=arr.size();
	unordered_set<int>h;
	int preSum=0;
	for(int i=0; i<arr.size(); i++){
		preSum+=arr[i];
		if(preSum==0){
			return true;
		}
		if(h.find(preSum)!=h.end()){
			return true;
		}
		h.insert(preSum);
	}
	return false;
}




int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={5,8,6,13,-3,-10,20};
	cout<<isSum0Subarray(v)<<endl;
	cout<<isSubarrayWith0Sum(v)<<endl;
	
	return 0;
}
