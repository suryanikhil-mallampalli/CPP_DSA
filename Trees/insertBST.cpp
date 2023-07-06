#include<bits/stdc++.h>
using namespace std;
// Tree Nodes
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key=x;
        left=right=nullptr;
    }
};


// Recursive Method
Node* insertREC(Node* root, int x){

    // Base case when the it found null
    if(root==nullptr) return new Node(x);

    //Body of the REC

    else if(root->key>x) root->left=insertREC(root->left, x);

    else if(root->key<x) root->right=insertREC(root->right, x);

    return root;
    // T: O(H)  O: O(H)
}


// Iterative method
Node* insertITER(Node* root, int x){
    Node* temp=new Node(x);
    Node* parent=nullptr;
    Node* curr=root;
    // travesing till the tip of the tree
    while (curr!= nullptr) {
        parent=curr;
        if(curr->key>x) curr=curr->left;
        else if(curr->key<x) curr=curr->right;
        else return root;
    }
    if(parent==nullptr) return temp;
    if(parent->key>x) parent->left=temp;
    else parent->right=temp;
    return root;
    // T: O(H)    O:O(1)     ***best for space consumption***
}


// Driver code
int main(){
    Node* root=nullptr;
    root=insertREC(root, 50);
    insertREC(root, 30);
    insertREC(root, 20);
    insertREC(root, 40);
    insertREC(root, 70);
    insertREC(root, 60);
    insertREC(root, 80);
}