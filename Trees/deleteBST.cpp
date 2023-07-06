#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key=x;
        left=right=nullptr;
    }
};

// REC method 
Node* delNodeREC(Node* root,int x){

    if(root==nullptr) return root;

    if(root->key>x) root->left=delNodeREC(root->left, x);
    
    else if(root->key<x) root->right=delNodeREC(root->right, x);
    
    // if the value matches with the current root
    else{
        // if left child is NULL
        if(root->left==nullptr) return root->right;

        // if right child is NULL
        else if(root->right==nullptr) return root->left;

        // if both children are present
        else{
            Node* succ=root->right;
            // moving to the successor greatest node in the tree
            while(succ->left!=nullptr) succ=succ->left;
            root->key=succ->key;
            root->right=delNodeREC(root->right, succ->key);
        }
        return root;

    }

} 

int main(){

}