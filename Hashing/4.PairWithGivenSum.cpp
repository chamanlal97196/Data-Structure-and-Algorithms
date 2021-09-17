/*
IP : arr[]={3,2,8,15,-8};
     sum=17
     
    op : ture;
    
    Naive Solution : consider all possible pairs one by one and cheak from sum.
    arr[]={8,3,9,4};
    sum=13
    
    Time O(n^2);
    space : O(1).
    
    
    Efficient Solution : Time O(n) space O(n);
    Using HashMap;
    
    Note : inserting everything into a HashMap then traverse through the array does not work at all.
    
    for example its not work for this given example: 
    arr[] ={8,3,2,5};
    sum=6;
    
    now we look for find(sum-arr[i);  In this case we return incorrect result;:
    let's see correct implementation for both aproach: 
*/
#include <bits/stdc++.h>
using namespace std;

//Naive Solution :
bool is_pair(vector<int>& arr, int sum){
	for(int i=0; i<arr.size(); i++){
		for(int j=i+1; j<arr.size(); j++){
			if(arr[i]+arr[j]==sum){
				return true;
			}
		}
	}
	return false;
}

//Efficient Solution: 

bool isPair(vector<int>& arr, int sum){
	unordered_set<int>h;
	for(int i=0; i<arr.size(); i++){
		if(h.find(sum-arr[i])!=h.end()){
			return true;
		}
		else{
			h.insert(arr[i]);
		}
	}
	return false;
}




int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={3,2,8,15,-8};
	cout<<is_pair(v,17)<<endl;
	cout<<isPair(v,17)<<endl;
	return 0;
}
