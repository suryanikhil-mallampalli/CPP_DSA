#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     isPalindrome(str, start + 1, end - 1));
}
//Main function
int main(){
    string s = "Swagagaws";
	
		printf("%s", isPalindrome(s, 0, s.length() -1) ? "true" : "false");
	
    return 0;
}