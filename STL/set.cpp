// set -> stores only unique elements
// behind the scenes it uses BST
// returns data sorted way
// slower than unordered_set, bcoz that does not return in sorted manner

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    // O(logN)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
     
    // initializing the iterator
    set<int>::iterator it = s.begin();
    it++;

    // for erasing
    s.erase(it);

    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    // present or not
    cout<<s.count(5)<<endl;
    cout<<s.count(-5)<<endl;

    // returns iterator form 5 in the above set
    set<int>::iterator itr = s.find(3);

    for(auto it=itr; it != s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

}
