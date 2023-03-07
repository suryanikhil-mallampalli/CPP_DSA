//using advance in STL library
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5};
    vector<int>::iterator ptr=a.begin();
    cout<<*ptr<<endl;
    advance(ptr,3);
    cout<<*ptr<<endl;

    return 0;
}