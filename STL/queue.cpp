// Queue -  FIFO


#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("surya");
    q.push("nikhil");
    q.push("mallampalli");
    cout<<"size: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    q.pop();
    cout<<"first element: "<<q.front()<<endl;
    cout<<"size: "<<q.size();
}