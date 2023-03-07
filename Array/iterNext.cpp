//exploring next() and prev() in STL library
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5};
    vector<int>::iterator ptr=a.begin();
    vector<int>::iterator ftr=a.end();

    cout<<*ptr<<endl;
    cout<<*ftr<<endl;

    auto it=next(ptr,3);
    auto it1=prev(ftr,1);
    cout<<*it<<endl;
    cout<<*it1<<endl;
return 0;
}