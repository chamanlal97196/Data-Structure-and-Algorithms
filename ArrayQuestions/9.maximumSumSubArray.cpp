#include <bits/stdc++.h>
using namespace std;
//Brute Forse In this methos we run two loops to cheak all subarray which 
// one has maximum sum time : O(n^2) space : O(1);

int maxSumSubArray(int arr[], int n){
	int res=arr[0];
	for(int i=0; i<n; i++){
		int curr=0;
		for(int j=i; j<n; j++){
			curr+=arr[j];
		}
		res=max(res, curr);
	}
	return res;
}

//Optimal solution for this question : time : O(n) Space : O(1)

int maxSumSubArrayO(int arr[], int n){
	int res=arr[0];
	int maxEnding=arr[0];
	for(int i=1; i<n; i++){
		maxEnding=max(maxEnding+arr[i], arr[i]);
		res=max(maxEnding, res);
	}
	return res;
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	
	int arr[]={2,3,-8,7,-1,2,3};
	printArray(arr,7);
	cout<<maxSumSubArray(arr,7)<<endl;
	cout<<maxSumSubArrayO(arr,7)<<endl;
	return 0;
}

