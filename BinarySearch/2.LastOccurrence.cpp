#include<bits/stdc++.h>
using namespace std;

int lastOcc(vector<int>&arr, int x){
	int low=0;
	int high=arr.size()-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>x){
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			if(mid==0 || arr[mid]!=arr[mid+1]) return mid;
			else low=mid+1;
		}
	}
	return -1;
}

int main(){
	
	vector<int>arr={23,44,55,67,99,99};
	cout<<lastOcc(arr,99)<<endl;
	cout<<lastOcc(arr, 98)<<endl;
	
	return 0;
}
