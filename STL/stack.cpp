// Stack - LIFO
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;
    s.push("surya");
    s.push("mallampalli");
    s.push("nikhil");
    cout<<"Top ELEMENT: "<<s.top()<<endl;
    s.pop();
    cout<< "top element: "<<s.top()<<endl;

    cout<<s.size()<<endl;
    // cout<<s.empty();
        
}