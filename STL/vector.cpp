#include<iostream>
#include<vector>
using namespace std;

int main(){
    // initializing an vector
    vector<int> v;

    // initializing vector a of size 5 with all 1's init
    vector<int> a(5,1);

    //copying one vector to another;
    vector<int> last(a);

    cout<<"a: "<<endl;
    for(int i: a){
        cout<<i<<" ";
    }cout<<endl;
     
    cout<<"last: "<<endl;
    for(int i: last){
        cout<<i<<" ";
    }cout<< endl;

    // check for the capacity
    cout<<v.capacity()<<endl;

    // pushing elements
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    // container total capacity
    cout<<v.capacity()<<endl;
    // elements in the container
    cout<< v.size()<<endl;

    // front element
    cout<<"front"<<v.front()<<endl;
    // back element
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    // for removing the back element
    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    // by emnotying the size becomes 0 not the capacity
    cout<<"before clearing size: "<<v.size()<<endl;
    v.clear();
    cout<<"after clearing size: "<<v.size()<<endl;
}