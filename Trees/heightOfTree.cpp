#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}

};

// fidning height of the given tree
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1; // *********** //
    }
    // Time Complexity: O(N) N - Number of nodes
    // Auxilary Space: O(H)
} 


int main(){
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	cout<<height(root);
    return 0;
}