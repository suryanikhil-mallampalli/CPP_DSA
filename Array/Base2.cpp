//check palindrome using recursion
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char str[],int s, int e){
    if(s==e){
        return true;
    }
    if(str[s]!=str[e]) return false;
    if(s<e) return isPalindrome(str, s+1,e-1);
    return true;
}
int main(){
    int s,e;
    char str[]="madam";
    s=0;
    e=strlen(str)-1;
    if(isPalindrome(str,s,e)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}