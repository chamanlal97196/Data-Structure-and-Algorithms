#include <bits/stdc++.h>
using namespace std;

//Brute Forse
int maxDefference(int arr[], int n){
	int i=0;
	int j=1;
	int result=arr[j]-arr[i];
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			result=max(result, arr[j]-arr[i]);
		}
	}
	return result;
}

// optimal Solution;

int maxDefferenceO(int arr[], int n){
	int result=arr[1]-arr[0];
	int min_val=arr[0];
	for(int i=1; i<n; i++){
		if(min_val<arr[i]){
			result = max(result, arr[i]-min_val);
			min_val=min(min_val, arr[i]);
		}
	}
	return result;
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
	int arr[]={2,3,5,6,10,7,1};
	printArray(arr,7);
	cout<<maxDefference(arr,7)<<endl;
	cout<<maxDefferenceO(arr, 7);
	
	return 0;
}
