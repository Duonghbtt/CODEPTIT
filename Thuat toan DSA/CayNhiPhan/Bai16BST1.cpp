#include <bits/stdc++.h>
using namespace std;

int n;
int preorder[1005] , inorder[1005];
struct node{
	int data;
	node *left , *right;
	node (int x){
		data = x;
		left = right = NULL;
	}
};

void insert(node *root , int x){
    if(x < root -> data){
        if(root -> left) insert(root -> left , x);
        else root -> left = new node (x);
    }
    else{
        if(root -> right) insert(root -> right , x);
        else root -> right = new node(x);
    }
}

void inorder(node *root){
    if(!root) return;
    inorder(root -> left);
    cout << root->data <<" ";
    inorder(root -> right);
}
int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    node *root = new node(a[0]);
    for(int i = 1 ; i < n ; i++){
        insert(root , a[i]);
    }
    
}