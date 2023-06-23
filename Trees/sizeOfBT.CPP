// BFS Traversal implemented
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};


int getSize(Node* root){
    if(root==NULL)return 0;
    else{
        return 1+getSize(root->left)+getSize(root->right);
    }

    // O(N) Time Complexity
    // O(H) Space Complexity

}
int main(){
    return 0;
}
