/* Selection sort : O(n^2) Algorithms.
 selection Sort : Does less memory write compaire to Quicksort , MergeSort, Insertion sort, etc.
 But cycle sort is optimal in term of memory.
 
 -> Its gives Basic idea for heapsort.
 -> Not Stable 
 -> InPlace correct.
 
 Working : we find the min element index and put first place then we find second min element index
           and put second place and so on............
           
           Let's see implementation : 
*/

#include <bits/stdc++.h>
using namespace std;

//selection sort 
void selectionSort(int arr[], int n){
	for(int i=0; i<n; i++){
		int min_index=i;//Lets assume ith index is min_index 
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[min_index]){
				min_index=j; //lets update the min_index if any other index value is smaller.
			}
		}
		swap(arr[min_index], arr[i]); //lets swap with min_index and arr[i].
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
	selectionSort(arr, n); //call the selectionSort function 
	printArray(arr, n);
	return 0;
}
