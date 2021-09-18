/*
Problem : Longest SubArray with Equal 0s and 1s: :

ip  : arr[]={1,0,1,1,1,0,0};
      op : 6 (index i=1 se i=6 tak) : 
      
    Naive solution : : 
    
*/

#include <bits/stdc++.h>
using namespace std;


// Naive solution :
int longestSub(vector<int> &arr){
	// int n=arr.size();
	int res=0;
	for(int i=0; i<arr.size(); i++){
		int count0=0;
		int count1=0;
		for(int j=i; j<arr.size(); j++){
			if(arr[j]==0){
				count0++;
			}
			if(arr[j]==1){
				count1++;
			}
			if(count1==count0){
				res=max(res, count0+count1);
			}
			
		}
	}
	return res;
}


//Efficient solution :

/*
 Replece every 0 with -1;
   for(int i=0; i<n; i++){
   	   if(arr[i]==0) arr[i]=-1; 
   }
   
   
   Now call the function to find length of the longest SubArray with 0 sum. 
   let's implement:
*/

int maxLen(vector<int> &arr, int sum){
	int res=0;
	unordered_map<int,int>mp;
	int preSum=0;
	for(int i=0; i<arr.size(); i++){
		preSum+=arr[i];
		if(preSum==sum){
			res=i+1;
		}
		if(mp.find(preSum)==mp.end()){
			mp.insert({preSum, i});
		}
		if(mp.find(preSum-sum)!=mp.end()){
			res=max(res, i-mp[preSum-sum]);
		}
	}
	return res;
	
}

int longestSubO(vector<int> &arr){
	for(int i=0; i<arr.size(); i++){
		if(arr[i]==0){
			arr[i]=-1;
		}
	}
	return (maxLen(arr, 0));
}




int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>v={1,0,1,1,1,0,0};
	cout<<longestSub(v)<<endl;
	cout<<longestSubO(v)<<endl;
	return 0;
}
