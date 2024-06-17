#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node* makeNode(int x) {
    node *newNode = new node;
    newNode ->data = x;
    newNode -> left = newNode ->right = NULL;
    return newNode;
}

 // tim kiem
bool search(node *root , int key){
    if(root = NULL) return false;
    if(root->data == key) return true;
    else if(root->data <key){
        return search(root->right ,key);
    }
    else return search(root->left ,key);
}
 // chen 
node *insert(node *root , int key){
    if(root == NULL){
        return makeNode(key);
    }
    if(key < root ->data){
        root->left = insert(root -> left , key);
    }
    else if(key > root -> data){
        root -> right = insert(root->right , key);
    }
    return root;
}
// xoa

node *minNode(node *root){
    node *temp = root;
    while(temp != NULL && temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

node* deleteNode(node *root , int key){
    if(root == NULL) return root;
    if(key < root -> data){
        root -> left = deleteNode(root -> left , key);
    }
    else if(key > root -> data){
        root -> right = deleteNode(root -> right , key);
    }
    else{
        if(root -> left == NULL){
            node *tmp = root -> right;
            delete root;
            return tmp;
        }
        else if(root -> right == NULL){
            node *tmp = root -> left;
            delete root;
            return tmp;
        }
        else{
            node *tmp = minNode(root);
            root -> data = tmp -> data;
            root -> right = deleteNode(root -> right , tmp -> data);
        }
    }
}


int main(){
   
}