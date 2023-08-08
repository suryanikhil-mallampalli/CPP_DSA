// using Iterators, begin, end, next(), prev()
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={10,20,30,40,50};
    vector<int>:: iterator i= v.begin(); // auto i;
    i=next(i);
    cout<<(*i)<<" ";
    i=next(i,2); // moves the iteratorto 2 next positions
    cout<<(*i)<<" ";
    i=prev(i,3);
    cout<<(*i)<<" ";
    advance(i,3); // modifies the iterator
    cout<<(*i)<<" ";
    return 0;
}