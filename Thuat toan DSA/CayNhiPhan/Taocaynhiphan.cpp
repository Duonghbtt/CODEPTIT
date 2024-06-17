#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data;
    // 2 con tro
    node *left; // luu dia chi cua node con ben trai
    node *right;// luu dia chi cua node con ben phai
};

// Neu khong muon dung constructor thi co the viet ham
// Cach 2 : Cap phat Node moi
node* makeNode(int x) {
    node *newNode = new node;
    newNode ->data = x;
    newNode -> left = newNode ->right = NULL;
    return newNode;
}

int main(){
    // Cach 2
    node *root = makeNode(1);
    root -> left = makeNode(2);
    root -> right = makeNode(3);
    root -> left -> left = makeNode(4);
    root ->left->right = makeNode(5);
//     1 
//   2   3
//  4 5   
    // in  ben phai
    while(root != NULL){
        cout << root -> data << " ";
        root = root ->right;
    }

}