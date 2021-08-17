#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>&arr, int x){
	int high=arr.size()-1;
	int low=0;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>x){
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid;
		}
		else{
			if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
			else high = mid-1;
		}
	}
	return -1;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={5,33,33,38,44,56,87};
	cout<<firstOcc(v,33)<<endl;
	
	
	return 0;
}

