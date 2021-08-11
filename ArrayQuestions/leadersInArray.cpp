#include <bits/stdc++.h>
using namespace std;

// Brute Forse method O(n^2)
void leadersInArray(int arr[], int n){
	for(int i=0; i<n; i++){
		//lets arr[i] is leader now i would like to cheak next elements;
		bool flag = false;
		for(int j=i+1; j<n; j++){
			if(arr[i]<arr[j]){
				flag=true;
			}
		}
		if(flag==false) cout<<arr[i]<<" ";
	}
}

//Optimal Solution 

void leadersInArrayO(int arr[], int n){
	int newArray[n];
	int maxuntil=arr[n-1];
	newArray[0]=arr[n-1];
	int j=1;
	for(int i=n-2; i>=0; i--){
		if(arr[i]>maxuntil){
			maxuntil =arr[i];
			newArray[j++]=maxuntil;
		}
		
	}
	int d=sizeof(newArray)/sizeof(newArray[0]);
	reverse(newArray, newArray+d);
	for(int i=0; i<d; i++){
		cout<<newArray[i]<<" ";
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
	int arr[]={7,10,4,6,4,5,2};
	printArray(arr, 7);
	cout<<endl;
	leadersInArray(arr,7);
	cout<<endl;
	leadersInArrayO(arr,7);
	
	return 0;
}
