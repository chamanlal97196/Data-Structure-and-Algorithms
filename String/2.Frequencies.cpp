#include <bits/stdc++.h>
using namespace std;

/*.   Given String like  : str
      we have to count frequency of each char For example : 
      I/p : geeksforgeeks : 
      o/p : e 4
            f 1 
            g 2 
            k 2 
            o 1 
            r 1 
            s 1 
*/
// I would like to store all letters in a aux arr;
// then traverse the aux arr and print accordling.

void countFrequencies(string &str){
	int count[26]={0};
	for(int i=0; i<str.length(); i++){
		count[str[i]-'a']++;
	}
	for(int i=0; i<26; i++){
		if(count[i]>0){
			cout<<(char)(i+'a')<<" "<<count[i]<<endl;
		}
	}
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	string str="geeksforgeeks";
	countFrequencies(str);
	return 0;
}
