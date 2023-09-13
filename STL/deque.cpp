// doubly ended queue
// can perform push and pop operation on both sodes of the queue is called as deque
// random access possible in this structure

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    //inserting element on backside
    d.push_back(1);
    //inserting element from front side
    d.push_front(2);
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    // // popping for back
    // d.pop_back();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"first element index: "<<d.at(1)<<endl;
    cout<<"front element: "<<d.front()<<endl;
    cout<<"back element: "<<d.back()<<endl;

    cout<<"is empty: "<<d.empty()<<endl;


    cout<<"before erasing: "<<d.size()<<endl;
    // erasing elements in it
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erasing: "<<d.size()<<endl;
}
