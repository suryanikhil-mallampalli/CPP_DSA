//exploring iterator in STL library
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5};
    vector<int>::iterator ptr=a.begin();
    cout<<"Elements in the vector are: ";
    for(ptr=a.begin();ptr<a.end();ptr++){
        cout<<*ptr<<" ";
    }
    return 0;
}
