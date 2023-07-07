// Problem: we have to return the closest greater or equal number that is nearer to the given key Value

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

// here we will parse the tree from right onwards
Node* ceil(Node* root, int x){
    Node* res = nullptr;
    while(root!=nullptr){
        if(root->key == x)return root;
        else if(root->key < x) root=root->right;
        else{
            res=root;
            root=root->left;
        }
    }
}

int main(){
    return 0;
}
