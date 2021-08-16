#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &arr){
	int n=arr.size();
	stack<int>s;
	vector<int>res;
	s.push(arr[n-1]); res.push_back(-1);
	for(int i=n-2; i>=0; i--){
		while(s.empty()==false && s.top()<=arr[i] ){
			s.pop();
		}
		int nextGreaterElement=s.empty()?-1 : s.top();
		res.push_back(nextGreaterElement);
		s.push(arr[i]);
	}
	return reverse(begin(res), end(res));
	
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={5,15,10,8,6,12,5,18};
	vector<int>ans=nextGreater(v);
	for(auto it : ans){
		cout<<it<<" ";
	}
	return 0;
}
