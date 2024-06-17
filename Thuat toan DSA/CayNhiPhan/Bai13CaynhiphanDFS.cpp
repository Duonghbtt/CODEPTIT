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
// ham them canh
void makeRoot(node *root , int u , int v , char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}
// Cho v la node con cua u , ham di tim
void inserNode( node *root , int u , int v , char c){
    if(root == NULL) return;
    if(root->data==u){
        makeRoot(root,u,v,c);
    }
    else{
        inserNode(root->left , u, v, c);
        inserNode(root->right,u,v,c);
    }
}
void inp(node *&root){
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
}

void dfs(node *u){
    cout << u ->data <<" ";
    if(u->right) dfs(u->right);
    if(u->left) dfs(u->left);
}

int main(){
    node *root1 = NULL;
    inp(root1);
	dfs(root1);
}