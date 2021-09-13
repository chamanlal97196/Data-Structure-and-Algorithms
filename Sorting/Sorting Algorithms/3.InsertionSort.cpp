/*
Insertion Sort : O(n^2) in Worest case
-> InPlace and Stable 
-> Used in practice for small array.
-> O(n) best case.

idea ::   given Array : sorted +Unsorded ;
          or almost sorted apply Insertion sort;
          
Time Complexity :
 _> Best Case : O(n) : Already Sorded in increasing order
 -> Worest case : O(n^2) Reverse Sorded 
 -> In Genearal : O(n^2)   
 
 Let's see implementation in order to get better understanding: 

*/
#include<bits/stdc++.h>
using namespace std;
//Insertion sort

void InsertionSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int key =arr[i];
		int j=i-1; 
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

//print Array
void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	// std::cout << "Hello, World" << std::endl;
	int arr[]={23,34,10,73,27,3,46,456};
	int n=sizeof(arr)/sizeof(arr[0]);  //calculate the size of array 
	printArray(arr, n);
	InsertionSort(arr, n); //call the Sort function 
	printArray(arr, n);
	return 0;
}
