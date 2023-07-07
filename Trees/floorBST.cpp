// Problem: we have to return the closest smaller or equal number that is nearer to the given key Value

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


// here we parse the tree from left onwards
Node* floor(Node* root, int x){
    Node* res = nullptr;
    while(root!=nullptr){
        if(root->key == x) return root;
        else if(root->key > x) root=root->left;
        else{
            res=root;
            root=root->right;
        }
    }
    return res;

}

int main(){
    return 0;
}
