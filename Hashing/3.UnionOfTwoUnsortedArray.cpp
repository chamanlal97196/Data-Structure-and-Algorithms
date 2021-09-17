/*
  Hashig problem :
  Union of two unsorted Array : 
  ip : a[]={15,20,5,15};
       b[]={15, 15,15,20,10};
       
  op : 4 //(15,20,5,10):
  
  Naive Solution : 
  
  1. initialize : res=0;
  2. create an auxiliary array dist[].
  3. Traverse through a[], for every element in a[], 
    ->cheak if it is present in dist[],
    -> if no  a) increment res;
              b) append the element to dict.
  4. repeat step-3 for every element of b[i].
  
  
  Efficient Solution: :
  use HashMap : set in c++.
  insert a[], and insert b[], and return the size of set. 
  that's all .
*/



#include <bits/stdc++.h>
using namespace std;

//Naive Solution :


//Efficient Solution :

int Union(vector<int>& a, vector<int>& b){
	unordered_set<int>s(a.begin(), a.end());
	for(int i=0; i<b.size(); i++){
		s.insert(b[i]);
	}
	return s.size();
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	vector<int>a{15,20,5,15};
	vector<int>b{15,15,15,20,10};
	cout<<Union(a, b)<<endl;
	return 0;
}
