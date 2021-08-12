#include <bits/stdc++.h>
using namespace std;

int minSum(int arr[], int n){
	int res=arr[0];
	int minEnding=arr[0];
	for(int i=1; i<n; i++){
		minEnding=min(minEnding+arr[i], arr[i]);
		res=min(res, minEnding);
	}
	return res;
}

int maxSum(int arr[], int n){
	int res=arr[0];
	int maxEnding=arr[0];
	for(int i=1; i<n; i++){
		maxEnding=max(maxEnding+arr[i], arr[i]);
		res=max(res, maxEnding);
	}
	return res;
}

int overAllSum(int arr[], int n){
	int max_normal=maxSum(arr,n);
	if(max_normal<0) return max_normal;
	int sumArray=0;
	for(int i=0; i<n; i++){
		sumArray+=arr[i];
	}
	int sumCircular=sumArray-minSum(arr, n);
	return max(sumCircular, max_normal);
	
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
	int arr[]={5,4,-3,1,-2,9};
	printArray(arr,6);
	cout<<endl;
	cout<<overAllSum(arr,6)<<endl;
	int arr1[]={-8,-4,-9,-2,-3,-9};
	printArray(arr1, 6);
	cout<<endl;
	cout<<overAllSum(arr1, 6);
	
	return 0;
}
