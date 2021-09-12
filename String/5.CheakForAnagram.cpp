#include <bits/stdc++.h>
using namespace std;

/*
AnaGrams : Permutation of each others or not ;
every charachar should appear first and second string as well as frequencies mathes:)

ip : s1="listen", s2="silent";
op : yes (s1, s2 are Permutation of each others)

ip : s1="aab" s2="bab";
op : No

let's talk about the solution how to handle problem :

first solution very state forward : 
sort the both strings now compare : they would be same if (they are same ) return true;
else return false;

better solution :
Use Aux Array 256 character then increment count++ and count--;
see the implementation in order to get better understanding : 
*/

// Naive solution :
bool areAnagram(string &s1, string &s2){
	if(s1.length()!=s2.length()) return false;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	return (s1==s2);
}


//efficient solution :
bool areAnagrams(string &s1, string &s2){
	if(s1.length()!=s2.length()) return false;
	int count[256]={0};
	for(int i=0; i<s1.length(); i++){
		count[s1[i]]++;
		count[s2[i]]--;
	}
	for(int i=0; i<256; i++){
		if(count[i]!=0){
			return false;
		}
	}
	return true;
}
int main()
{
	// std::cout << "Hello, World" << std::endl;
	string s1="listen";
	string s2="silent";
	if(areAnagrams(s1, s2)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	if(areAnagram(s1, s2)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
