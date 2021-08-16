#include<bits/stdc++.h>
using namespace std;

int getMaxArea(vector<int> &arr){
	int res=0;
	int n=arr.size();
	vector<int>preSmaller;
	vector<int>nextSmaller;
	
	stack<int>s;
	
    // calculate preSmaller element; 
	s.push(0); //preSmaller.push_back(-1);
	for(int i=0; i<n; i++){
		while(s.empty()==false && arr[s.top()]>=arr[i]) s.pop();
		int ans=s.empty()?-1:s.top();
		preSmaller.push_back(ans);
		s.push(i);
	}
	
	while(s.empty()==false){
		s.pop();
	}
	
	// calculate nextSmaller element
	s.push(n-1);
	for(int i=n-1; i>=0; i--){
		while(s.empty()==false && arr[s.top()]>=arr[i]) s.pop();
		int ans=s.empty()?n:s.top();
		nextSmaller.push_back(ans);
		s.push(i);
		
	}
	reverse(nextSmaller.begin(), nextSmaller.end());
	for(int i=0; i<n; i++){
		int curr=arr[i];
		curr+=(i-preSmaller[i]-1)*arr[i];
		curr+=(nextSmaller[i]-i-1)*arr[i];
		
		res=max(res, curr);
	}
	
	
	
	return res;
}

int main(){
	
	vector<int>v={2,4,3,2};
    // int n=7;
    cout<<"Maximum Area: "<<getMaxArea(v);
	return 0;
}
