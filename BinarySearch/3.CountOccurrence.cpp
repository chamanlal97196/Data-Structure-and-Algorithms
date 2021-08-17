#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &arr, int x){
	int low =0;
	int high=arr.size()-1;
	while(low<=high){
		int mid=(low + high)/2;
		if(arr[mid]>x){
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
			else high=mid-1;
		}
	}
	return -1;
}

int lastOcc(vector<int> &arr, int x){
	int low=0;
	int high=arr.size()-1;
	while(low<=high){
		int mid = (low +high)/2;
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
	vector<int>arr={11,22,22,22,23,56,87};
	if(firstOcc(arr,22)==-1) cout<<"Element is not present "<<endl;
	cout<<(lastOcc(arr,22)-firstOcc(arr,22)+1)<<endl;
	
	return 0;
}
