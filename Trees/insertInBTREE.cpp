// C++ program to insert element in binary tree 

#include <iostream> 
#include <queue> 
using namespace std; 

// A binary tree node 
struct Node { 
    int key; 
    struct Node* left, *right; 
}; 

// Utility function to create a new Node
struct Node* newNode(int key) 
{ 
    struct Node* temp = new Node; 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 



// Function to print InOrder traversal 
// of a Binary Tree
void inorder(struct Node* temp) 
{ 
    if (!temp) 
        return; 

    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 







// Function to insert a new element in a Binary Tree
void insert(struct Node* temp, int key) 
{ 
    queue<struct Node*> q; 
    q.push(temp); 

    // Do level order traversal until we find 
    // an empty place. 
    while (!q.empty()) { 
        struct Node* temp = q.front(); 
        q.pop(); 

        if (!temp->left) { 
            temp->left = newNode(key); 
            break; 
        } else
            q.push(temp->left); 

        if (!temp->right) { 
            temp->right = newNode(key); 
            break; 
        } else
            q.push(temp->right); 
    } 
} 





// Driver code 
int main() 
{   
    // Create the following Binary Tree
    //          10
    //         /  \
    //        11   9
    //       /      \
    //      7        8
    struct Node* root = newNode(10); 
    root->left = newNode(11); 
    root->left->left = newNode(7); 
    root->right = newNode(9); 
    root->right->left = newNode(15); 
    root->right->right = newNode(8); 

    cout << "Inorder traversal before insertion:"; 
    inorder(root); 

    int key = 12; 
    insert(root, key); 

    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    inorder(root); 

    return 0; 
} 















def fun(s,t):
    if t == "" or s=="":
        return ""
    if s == t:
        return s
    else:
        # converting strings into lists
        lst1=[]
        lst2=[]
        for i in s:
            lst1.append(i)
        for j in t:
            lst2.append(j)
        num=len(lst1)
        flag=1
        count=0
        start=0
        end=0
        for i in range(num):
            if len(lst2):
                # for string the first index
                if lst1[i] == lst2[0] and flag:
                    start=i
                    flag=0
                # if matches then it deletes
                if lst1[i] == lst2[0]:
                    del lst2[0]
                    end=i
                count+=1
            else:
                break
        if not len(lst2):
            return s[start:end+1]
        else:
            return ""