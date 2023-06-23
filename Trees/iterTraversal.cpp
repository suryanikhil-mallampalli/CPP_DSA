#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};
void iterativeInorder(Node* root){
    stack<Node*> s;
    Node* curr=root;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
    // Time Complexity: O(N)
    // Space Complexity: O(H)
}
void iterativePreOrder(Node* root){
    if(root==NULL) return;
    stack<Node*> st;
    st.push(root);
    while(st.empty()==false){
        Node* curr=st.top();
        st.pop();
        cout<<curr->data<<" ";
        if(curr->right!=NULL) st.push(curr->right);
        if(curr->left!=NULL) st.push(curr->left);
    }
    // O(N)T & O(N)T
}

