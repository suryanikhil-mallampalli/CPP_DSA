// using Iterators, begin, end
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={10,20,30,40,50};
    vector<int>:: iterator i= v.begin(); // auto i;
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i=v.end();
    i--;
    cout<<(*i)<<" ";

}