// Write code to print the nodes that were at a distance of K from the root Node.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}

};


void printKDist(Node* root, int k){
    if(root== NULL) return;
    if(k==0){cout<<root->data<<"";}
    else{
        printKDist(root->left,k-1);
        printKDist(root->right,k-1);
    }

}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);

	int k=2;
	printKDist(root,k);
}