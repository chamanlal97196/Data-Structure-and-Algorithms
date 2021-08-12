
#include <bits/stdc++.h>
using namespace std;

//Brute forse method time : O(n^2); space O(1);

int maxConsecutive1S(int arr[], int n){
	int res=0;
	for(int i=0; i<n; i++){
		int curr=0;
		for(int j=i; j<n; j++){
			if(arr[j]==1){
				curr++;
			}
			else break;
		}
		res=max(res, curr);
	}
	return res;
}

//Efficent Solution for this question : 
//This is an Optimal Solution for this question its work in O(n) time and O(1) space;
int maxConsecutive1(int arr[], int n){
	int res=0;
	int curr=0;
	for(int i=0; i<n; i++){
		if(arr[i]==0) curr=0;
		else{
			curr++;
			res=max(res, curr);
		} 
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
	int arr[]={1,0,0,1,1,1,1,1};
	printArray(arr,8);
	cout<<endl;
	cout<<maxConsecutive1S(arr,8)<<endl;
	cout<<maxConsecutive1(arr,8)<<endl;
	return 0;
}
