
#include <bits/stdc++.h>
using namespace std;

// Brute Forse. // lmax==left side max block
// rmax= right side max block
//This solution take O(n^2) time in worest case;

int trappingRainWater(int arr[], int n){
	int res=0;
	for(int i=1; i<n-1; i++){
		int lmax=arr[i];
		for(int j=0; j<n; j++){
			lmax=max(lmax, arr[j]);
		}
		int rmax=arr[i];
		for(int j=i+1; j<n; j++){
			rmax=max(rmax, arr[j]);
		}
		res+=(min(rmax, lmax)-arr[i]);
	}
	return res;
}

//Efficent solution
//this solution use aux array to store left max and right max;
//its take O(n) time and space O(n);

int trappingRainWaterO(int arr[], int n){
	int res=0;
	int left[n];
	int right[n];
	left[0]=arr[0];
	right[n-1]=arr[n-1];
	for(int i=1;i<n; i++){
		left[i]=max(left[i-1], arr[i]);
	}
	for(int i=n-2; i>=0; i--){
		right[i]=max(right[i+1], arr[i]);
	}
	for(int i=1; i<n; i++){
		res+=(min(left[i], right[i])-arr[i]);
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
	int arr[] = {2,4,2,3,4};
	printArray(arr,5);
	cout<<trappingRainWater(arr,5)<<endl;
	cout<<"Efficent solution :"<<endl;
	cout<<trappingRainWaterO(arr,5)<<endl;
	// std::cout << "Hello, World" << std::endl;
	return 0;
}

