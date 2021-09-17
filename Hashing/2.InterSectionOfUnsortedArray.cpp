/*
  Hashing Questions : 
   Intersection of unsorder Array : 
   ip : 10 15 20 5 30
   b[] :30,5,30,80;
   
   op : 2 // 5,30 is the answer :
   
   Naive Solution : 1.Initicalize : res=0;
   2. traverse through every element of a[]
       -> cheak if it has not appeared already 
       -> if a new element and also present in b[], do res++
       
   3. finally return res;   
   
   
   Efficient Solution :
   use HashMap : in cPP set, :
   1.insert all element in s_a set;
   2. traverse through b[], search every element b[i] into set.
   if b[i] present in set 
    -> increment res;
    -> erase b[i] element from set.
    
    
    let's see implementation for both approach>
*/
#include <bits/stdc++.h>
using namespace std;
//Naive Solution :
int Intersection(vector<int>& a, vector<int>& b){
	int m=a.size();
	int n=b.size();
	int res=0;
	
	for(int i=0; i<m; i++){
		bool flag=false;
		for(int j=0;j<i; j++){
			if(a[i]==a[j]){
				continue;
			}
		}
		for(int j=0; j<n; j++){
			if(a[i]==b[j]){
				res++;
				break;
			}
		}
	}
	return res;
}

//Efficient Solution: 

int intersectionOfUnsortedArray(vector<int>&a, vector<int>&b){
	int res=0;
	unordered_set<int>s(a.begin(), b.end());
	for(int i=0; i<b.size(); i++){
		auto it =s.find(b[i]);
		if(it!=s.end()){
			res++;
			s.erase(it);
		}
	}
	return res;
}

int main()
{
	vector<int>a{10,15,20,5,30};
	vector<int>b{30, 5, 30, 80};
	cout<<Intersection(a, b)<<endl;
	cout<<intersectionOfUnsortedArray(a, b)<<endl;
    
    return 0;
}
