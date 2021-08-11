#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
int maxProfit(int arr[], int n){
	int profit=0;
	for(int i=1; i<n; i++){
		if(arr[i]>arr[i-1]){
			profit+=(arr[i]-arr[i-1]);
		}
	}
	return profit;
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
	int arr[]={2,3,1,6};
	printArray(arr,4);
	cout<<maxProfit(arr, 4);
	
	return 0;
}

