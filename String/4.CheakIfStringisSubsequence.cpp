#include <bits/stdc++.h>
using namespace std;

/*
#Subsequence: 
A subsequence is a sequence that can be derived from another sequence by zero or more elements, without changing the order of the remaining elements. 
#subarray: 
A subarray is a contiguous part of array. An array that is inside another array. For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays. The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4). In general, for an array/string of size n, there are n*(n+1)/2 non-empty subarrays/substrings.

In this question there are two string s1, s2 : we have to find s2 is sequence string of s1, or not.
if s2 is subsequence of s1 the print True ;
else false ;
For example : 

i/p : s1="ABCD" S2 ="AD"
o/p : True 

ip : s1="ABCDE" S2 ="AED"
OP : false:

there are mamy way to solve the problem i am disscuss few ways to solve this proble :

Naive Solution : 
s1 generate all Subsets the cheak with s2 one by one this solution have time complexcity : O(2^n*n);

Efficient solution :

we would like to traverse the both strings and taking some useful result with the help of two pointer ;
IN order to get better understanding Let's see the implementation : Hints : if(s1[i]==s2[j]) i++, j++;


Recursive solution Its alse Intresting solution for this problem :
lets deep dive into code ; 
Happy coding :)

*/

//Let's implementation Recursive solution :
bool isSubsequenceR(string s1, string s2,int n, int m){
	
	if(m==0) return true;
	if(n==0) return false;
	if(s1[n-1]==s2[m-1]){
		return isSubsequenceR(s1, s2, n-1, m-1);
	}
	else{
		return isSubsequenceR(s1,s2,n-1,m);
	}
}

//Efficient solution : 
bool isSubsequence(string &s1, string &s2){
	int n1=s1.length();//asume that n1>n2 always 
	int n2=s2.length();
	int i=0, j=0;//Here is declare two pointer which is keep track of subsequence;
	while(i<n1 && j<n2){
		if(s1[i]==s2[j]){//if elements are same than i would like to increment i, j as well 
			i++;
			j++;
		}
		else{
			i++;//if elements are not meet then i would like to increment only i;
		}
	}
	return (j==n2);
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	string str="ABCD";
	string str1="AD";
	if(isSubsequence(str, str1)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	if(isSubsequenceR(str, str1,4,2)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
