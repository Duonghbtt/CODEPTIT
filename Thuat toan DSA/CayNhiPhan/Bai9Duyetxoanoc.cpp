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

void spiral(Node *root){
    stack <Node*> s1 , s2;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            Node *top = s1.top();
            s1.pop();
            cout << top->data<<" ";
            if(top->right!=NULL){
                s2.push(top->right);
            }
            if(top->left!=NULL){
                s2.push(top->left);
            }
        }
        while(!s2.empty()){
            Node *top = s2.top();
            s2.pop();
            cout << top->data<<" ";
            if(top->left!=NULL){
                s1.push(top->left);
            }
            if(top->right!=NULL){
                s1.push(top->right);
            }
        }
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
    spiral(root);

}
