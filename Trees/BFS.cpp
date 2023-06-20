// BFS Traversal implemented
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}

};

void levelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right); 
    }
// Time Complexity: O(N)
// Space complexity: O(N)
}
int main(){
    
}