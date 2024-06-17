#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left , *right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeNode(Node *root , int u , int v , char c){
    if(c=='L') root->left = new Node(v);
    else root->right = new Node(v);
}

void insert(Node *root , int u , int v , char c){
    if(root == NULL) return;
    if(root ->data == u) makeNode(root,u,v,c);
    else{
        insert(root->left,u,v,c);
        insert(root->right , u, v, c);
    }
}

void levelorder(Node *root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *tmp = q.front();
        q.pop();
        cout << tmp -> data << " ";
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
}

int main(){
    Node *root = NULL;
    int n ;
    cin >> n;
    for(int i = 0 ;  i< n ; i++){
        int x , y ;
        char c;
        cin >> x >> y >> c;
        if(root == NULL){
            root = new Node(x);
            makeNode(root,x,y,c);
        }
        else{
            insert(root,x,y,c);
        }
    }
    levelorder(root);
}
