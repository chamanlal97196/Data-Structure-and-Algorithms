#include <bits/stdc++.h>
using namespace std;
//Brute Forse 
// Time : O(n^2)  Space : O(1);
int maxLengthOddEven(int arr[], int n){
	int res=1;
	for(int i=1; i<n; i++){
		int curr=1;
		for(int j=i; j<n; j++){
			if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j]%2!=0 && arr[j-1]%2==0){
				curr++;
			}
			else break;
		}
		res=max(curr, res);
	}
	return res;
}

//Optimal Solution : 
//Time O(n)  Space O(1);
int maxLengthOddEvenO(int arr[], int n){
	int res=1;
	int curr=1;
	for(int i=1; i<n; i++){
		if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2!=0 && arr[i-1]%2==0){
			curr++;
			res=max(res, curr);
		}
		else curr=1;
		
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
	int arr[]={10,12,14,7,8};
	printArray(arr,5);
	cout<<maxLengthOddEven(arr,5)<<endl;
	cout<<maxLengthOddEvenO(arr,5)<<endl;
	return 0;
}
