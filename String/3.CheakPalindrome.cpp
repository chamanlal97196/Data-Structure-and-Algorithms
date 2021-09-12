#include <bits/stdc++.h>
using namespace std;
/* Cheak Given String is palindrome or not if Given string is palindrome you have to return TRUE
otherwise FALSE ;
examples: 
i/p str : "ABCDCBA"
o/p : Yes 
i/p :"ABCD"
o/p : No

Solution Approach : 
first Naive Solution : reverse the string and store into a another string 
Then cheak if both strings are equal then Given string is palindrome else  not;

Efficient Solution : 
we make two pointer first pointer point string first charachar and second pointer point to last charachar
in the string 
if (first and last) charachar same than we first++, second--
let's see the implementation in order to get better understanding related to this ;:

*/
//Naive Solution reverse the Given string and compare with original string 
 
bool cheakPalindromeR(string &str){
	string res=str;//store original string into res and res string reverse it ;
	reverse(res.begin(), res.end());
	return (res==str);//NOw this time to compare both : 
}

bool cheakPalindrome(string &str){
	int low =0;//first pointer at 0th index
	int high=str.length()-1; // second index at n-1 th index;
	while(low<=high){
		if(str[low]!=str[high]){
			return false;
		}
		else{
			low++;
			high--;
		}
	}
	return true;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	string str="ABCDCBA";
	if(cheakPalindrome(str)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
	if(cheakPalindromeR(str)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
