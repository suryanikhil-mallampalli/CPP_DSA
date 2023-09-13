#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int, string> m;
    m[1] = "surya";
    m[2] = "mallampalli";
    m[13] = "nikhil";

    m.insert({5,"charan"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; 
    }

    // finding element

    cout<< m.count(13)<<endl;
    // erasing that element
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
