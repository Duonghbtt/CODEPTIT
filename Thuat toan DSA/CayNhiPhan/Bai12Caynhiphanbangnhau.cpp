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

int check(node *root1 , node *root2){
    if(root1==NULL && root2 == NULL) return 1;
    if(root1 == NULL || root2 ==NULL) return 0;
    if(root1->data != root2 -> data ) return 0;
    return check(root1->left , root2 ->left) && check(root1->right,root2->right);
}

int main(){
    node *root1 = NULL;
    node *root2 = NULL;
    inp(root1);
    inp(root2);
    if(check(root1,root2)) cout << "YES" << endl;
    else cout << "NO";
	
}