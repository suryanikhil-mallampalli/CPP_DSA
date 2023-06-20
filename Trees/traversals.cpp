#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}

};


//inOrder Traversal
void inOrder(Node *root){
    if(root!= NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
// Time Complexity: O(N)
// Auxilary Space: O(H)   H - hieght
}

// Pre Order Traversal
void preOrder(Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
// Time Complexity: O(N)
// Auxilary Space: O(H)   H - hieght
}


//Post Order Traversal

void postOrder(Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
// Time Complexity: O(N)
// Auxilary Space: O(H)   H - hieght

}

int main(){
    return 0;
}



