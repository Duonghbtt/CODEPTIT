#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data;
    // 2 con tro
    node *left; // luu dia chi cua node con ben trai
    node *right;// luu dia chi cua node con ben phai
    // constructor
    // Cach 1
    // node (int x){
    //     data = x;
    //     left = right = NULL;
    // }
};

// Neu khong muon dung constructor thi co the viet ham
// Cach 2
node* makeNode(int x) {
    node *newNode = new node;
    newNode ->data = x;
    newNode -> left = newNode ->right = NULL;
    return newNode;
}

int main(){
    //Cach 1
 //   node *root = new node(10); // cap phat dong
   // cout << root -> data << endl;
    // 10 
   // cout << root -> right << " " << root -> left << endl;
    // 0 0

    // Cach 2
    node *root = makeNode(10);
    cout << root -> data << endl;
    // 10 
    cout << root -> right << " " << root -> left << endl;
    // 0 0
}