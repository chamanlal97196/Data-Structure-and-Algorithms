/*
Bubble Sort : compair based Algorithms its take O(n^2) times
Bubble Sort : Has multiple pass. In first pass its return max element .
which is called Bubble.

Stable sorts : BubbleSort, InsertionSort, MergeSort.
UnStable Sorts : selectionSort, QuickSort, HeapSort.

BubbleSort : has Inplace Algorithm because its not use extra space : 

*/

#include <bits/stdc++.h>
using namespace std;

//BubbleSort
void BubbleSort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
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
	int arr[]={23,34,10,73,27,3,46,456};
	int n=sizeof(arr)/sizeof(arr[0]);  //calculate the size of array 
	printArray(arr, n);
	BubbleSort(arr, n); //call the Sort function 
	printArray(arr, n);
	return 0;
}
