//This demonstrates using inserter() in STL on arrays
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ar = { 1, 2, 3, 4, 5 };
    vector<int> ar1 = {10, 20, 30};
    vector<int>::iterator ptr = ar.begin();
    advance(ptr, 3);
    copy(ar1.begin(), ar1.end(), inserter(ar, ptr));
    cout<<"New vector after inserting elements: ";
    for(int &x: ar){
        cout<<x<<" ";
    }
    return 0;
}