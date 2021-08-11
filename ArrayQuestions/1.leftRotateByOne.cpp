#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int *temp = a;
	a=b;
	b=temp;
}

void reverse(int arr[], int low, int heigh){
	while(low<heigh){
		swap(arr[low], arr[heigh]);
		low++;
		heigh--;
	}
}

void leftRotateByD_places(int arr[], int d, int n){
	reverse(arr, 0,d-1);
	reverse(arr,d, n-1);
	reverse(arr, 0,n-1);
}


void leftRotateByOne(int arr[], int n){
	int temp=arr[0];
	for(int i=1; i<n; i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}

void leftRotateByD(int arr[], int d, int n){
	for(int i=0; i<d; i++){
		leftRotateByOne(arr,n);
	}
	
}

void printArray(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	
	int arr[]={11,22,33,44,55,66,77,88};
	leftRotateByD(arr, 3, 8);
	printArray(arr,8);
	cout<<endl;
	leftRotateByD_places(arr, 3,8);
	printArray(arr,8);
	return 0;
}
