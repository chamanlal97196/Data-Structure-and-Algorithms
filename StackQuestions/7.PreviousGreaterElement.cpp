#include<bits/stdc++.h>
using namespace std;

//brute forse solution :
// input : arr[] : {15,10,18,12,4,6,2,8};
// output        : -1,15,-1,18,12,12,6,12

vector<int> previousGreater(vector<int> &arr){
	vector<int>res;
	for(int i=0; i<arr.size(); i++){
		int j;
		for(int j=i-1; j>=0; j--){
			if(arr[i]<arr[j]) {
				res.push_back(arr[j]);
				break;
			}
		}
		if(j==-1){
			res.push_back(-1);
		}
	}
	return res;
	
}

vector<int> previousGreaterElement(vector<int>&arr){
	stack<int>s;
	vector<int>res;
	s.push(arr[0]);
	res.push_back(-1);
	for(int i=1; i<arr.size(); i++){
		while(s.empty()==false && s.top()<=arr[i]) s.pop();
		int ans = (s.empty()==true)? -1 : s.top();
		res.push_back(ans);
		s.push(arr[i]);
	}
	return res;
}


int main(){
	
	vector<int>v={15,10,18,12,4,6,2,8};
	vector<int>ans=previousGreaterElement(v);
	for(auto it : ans){
		cout<<it<<" ";
	}
	
	return 0;
}
