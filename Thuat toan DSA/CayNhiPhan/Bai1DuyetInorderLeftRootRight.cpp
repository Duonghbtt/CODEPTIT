#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    node *left;
    node *right;
    node(int x){
        val = x;
        left = right = NULL;
    }
};
// ham them canh
void makeRoot(node *root , int u , int v , char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}
// Cho v la node con cua u , ham di tim
void inserNode( node *root , int u , int v , char c){
    if(root == NULL) return;
    if(root->val==u){
        makeRoot(root,u,v,c);
    }
    else{
        inserNode(root->left , u, v, c);
        inserNode(root->right,u,v,c);
    }
}

void inorder(node *root){
    if(root == NULL) return;
    inorder(root -> left);
    cout << root -> val;
    inorder(root-> right);
}
int main(){
    node *root = NULL;
    int n ;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int u  , v ; char c;
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node (u);
            makeRoot(root,u,v,c);
        }
        else{
            inserNode(root,u,v,c);
        }
    }
    inorder(root);
}