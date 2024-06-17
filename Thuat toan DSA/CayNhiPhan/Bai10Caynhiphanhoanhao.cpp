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

int check(Node * root){
    queue<Node *> q;
    q.push(root);
    int cnt =0;
    while(!q.empty()){
        int s = q.size();
        if(s != pow(2,cnt)) return 0;
        for(int i = 0 ; i<  s ;i++){
            Node *u = q.front();
            q.pop();
            if(u->left) q.push(u->left);
            if(u->right) q.push(u-> right);
        }
    }
    return 1;
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
    if(check(root)) cout <<"YES"<<endl;
    else cout << "NO" << endl;
}
