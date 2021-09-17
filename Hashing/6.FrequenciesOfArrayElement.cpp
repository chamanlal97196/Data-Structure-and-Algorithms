/*
Frequencies of Array Elements : 

IP arr[] : {10, 12, 10,15,10,20,12,12};
op :  10  3 
      12  3 
      15  1 
      20  1 
      
    Naive Solution  : time worestcase : O(n^2) space : O(1).
    
   Efficient Solution : time o(N) space O(1);
   
   lets see implementation : 
*/

#include <bits/stdc++.h>
using namespace std;

//Naive Solution :
void printFreq(vector<int>& arr){
	for(int i=0; i<arr.size(); i++){
		bool flag=false;
		for(int j=0; j<i; j++){
			if(arr[i]==arr[j]){
				flag=true;
				break;
			}
		}
		
		if(flag==true){
			continue;
		}
		int freq=1;
		for(int j=i+1; j<arr.size(); j++){
			if(arr[i]==arr[j]){
				freq++;
			}
		}
		cout<<arr[i]<<" "<<freq<<endl;
	}
}


// Efficient Solution :

int countFreqs(vector<int>& arr){
	int n=arr.size();
	unordered_map<int,int>mp;
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	for(auto it :mp){
		cout<<(it.first)<<" "<<(it.second)<<endl;
	}
}
int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={10, 12, 10,15,10,20,12,12};
	printFreq(v);
	cout<<endl;
	countFreqs(v);
	return 0;
}
