
#include<bits/stdc++.h>
using namespace std;

int getMaxArea(int arr[], int n){
	if(n==1) return arr[0];
	int res=0;
	for(int i=0; i<n; i++){
		int curr=arr[i];
		for(int j=i-1; j>=0; j--){
			if(arr[j]>=arr[i]) curr+=arr[i];
			else break;
		}
		for(int j=i+1; j<n; j++){
			if(arr[j]>=arr[i]) curr+=arr[i];
			else break;
		}
		res=max(curr, res);
	}
	return res;
}

int main(){
	
	int arr[]={2,3,4,2};
	int ans=getMaxArea(arr,4);
	cout<<ans<<" "<<endl;
	return 0;
}
