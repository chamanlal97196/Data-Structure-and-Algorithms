#include <bits/stdc++.h>
using namespace std;

//Brute forse
void moveAllZerosEnd(int arr[], int n){
	for(int i=0; i<n; i++){
		
		//if arr[i] element has zero value;
		if(arr[i]==0){
			for(int j=i+1; j<n; j++){
				if(arr[j]!=0){
					swap(arr[i], arr[j]);
					break;
				}
			}
		}
		
	}
}

// Optimal Solution 

void moveAllZerosToEnd(int arr[], int n){
	int j=0;
	for(int i=0; i<n; i++){
		if(arr[i]!=0){
			swap(arr[j], arr[i]);
			j++;
		}
	}
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
	int arr[]={20,0,34,5,0,35,45};
	moveAllZerosEnd(arr,7);
	printArray(arr,7);
	cout<<endl;
	moveAllZerosToEnd(arr,7);
	printArray(arr,7);
	return 0;
}
