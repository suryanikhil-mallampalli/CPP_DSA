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
// using recursive method
bool searchREC(Node* root, int x){
    if(root==nullptr) return false;

    else if(root->key==x) return true;

    else if(root->key>x) return searchREC(root->left, x);

    else return searchREC(root->right, x);
}
// using iterative method
bool searchITER(Node* root, int x){
    while(root!=nullptr){
        if(root->key==x) return true;

        else if(root->key>x) root=root->left;

        else root=root->right;
    }
    return false;
}


// TC: O(H )
// Auxilary Space: O(H)  for REC   *** coz of function stack***
// Auxilary Space: O(1)  for ITER ***best*** 
int main(){

}