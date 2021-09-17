/*
Problem name : count distinct Elements :

ip: arr[]={15, 12, 13, 12, 13, 13, 18};
op  4  ( 15,12,13,18);

Naive Solution : time : O(n^2)  space : O(1)

Efficient Solution:  Time  O(n)  space : O(n).

let's implementations : both approach: 


*/

#include <bits/stdc++.h>
using namespace std;

//Navie Solution : 

int distinctCount(vector<int>& arr){
	int res=0;
	for(int i=0; i<arr.size(); i++){
		bool flag =false;
		for(int j=0; j<i; j++){
			if(arr[i]==arr[j]){
				flag=true;
				break;
			}
		}
		if(flag==false){
			cout<<arr[i]<<" ";
			res++;
		}
	}
	cout<<endl;
	return res;
}

//Efficient Solution :

int distinctCounts(vector<int>arr){
	unordered_set<int>h(arr.begin(), arr.end());
	for(auto it : h){
		cout<<it<<" ";
	}
	cout<<endl;
	return h.size();
}


int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={15,12,13,12,13,13,18};
	cout<<distinctCount(v)<<endl;
	cout<<distinctCounts(v)<<endl;
	return 0;
}
