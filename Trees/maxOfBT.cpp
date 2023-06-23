// finding the maximum element in the given tree
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

// using recursions perform bad on skewed trees
int getMax(Node* root){
    if(root== NULL) return INT_MIN;
    else{
        return max(root->data,max(getMax(root->left),getMax(root->right)));
    }
    // O(H) - SC
    // O(N) - TC
}


// we can also use level order to do the same it works well for skewed trees
int main(){
  return 0;
}