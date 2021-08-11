Input : 10 10 10 20 30 30 
Output :
10 3
20 1
30 2
  
  #include <bits/stdc++.h>
using namespace std;

void frequencyInASortedArray(int arr[], int n){
	int i=1;
	int freq=1;
	while(i<n){
		while(i<n && arr[i]==arr[i-1]){
			i++;
			freq++;
		}
		cout<<arr[i-1]<<" "<<freq<<endl;
		i++;
		freq=1;
		if(arr[n-2]!=arr[n-1]) cout<<arr[n-1]<<" "<<1<<endl;
	}
}


void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	int arr[]={10,10,10,20,30,30};
	printArray(arr, 6);
	frequencyInASortedArray(arr,6);
	
	return 0;
}

