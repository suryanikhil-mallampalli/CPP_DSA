#include<bits/stdc++.h>
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct Node* reverseList(struct Node *head)
{
        // code here
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
    
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // return head of reversed list
        return prev;
};
        
int main(){
    return 0;
}