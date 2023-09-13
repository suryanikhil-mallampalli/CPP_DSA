//here in STL the list DSA is similar to Doubly Linked List
// cannot do random access
// erase -O(N) Insert -O(1)
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1) ;
    l.push_front(2);

    // accessing the data though loop
    for(int i:l){
        cout<< i <<" " ;
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase: "<<endl;
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;

    // size of list
    cout<<"size: "<<l.size()<<endl;

    // copying list
    list<int> n(l);
    for(int i: n){
        cout<<i<<" ";
    }cout<<endl;

    // declaring diff. type of list
    list<int> k(5, 100);
    for(int i:k){
        cout<<i<<" ";
    }




}