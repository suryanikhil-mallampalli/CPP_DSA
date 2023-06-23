#include<bits/stdc++.h>
using namespace std;

//The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
// The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};

//Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
    // Your code here
}
