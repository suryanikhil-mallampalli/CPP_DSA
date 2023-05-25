#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int main(){
    // creation of nodes
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    //connecting them eachother
    head->next = temp1;
    temp1->next = temp2;
    // this results in forming a circle
    temp2->next = head;
    return 0;
}