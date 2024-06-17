#include <bits/stdc++.h>
using namespace std;

int n;
int preorder[1005] , inorder[1005];
struct Node{
	int data;
	Node *left , *right;
	Node (int x){
		data = x;
		left = right = NULL;
	}
};

int tim(int a[] , int x){
	for(int i = 0 ; i < n ; i++){
		if(a[i]==x) return i;
	}
	return 0;
}
void buildTree(Node *root , int in_left , int in_right){
	int	in_pos = tim(inorder ,root -> data);
	int	pre_pos=tim(preorder , root->data);
	if(in_pos > in_left){
		root->left = new Node(preorder[pre_pos+1]);
		buildTree(root->left , in_left , in_pos-1);
	} 
	if(in_pos < in_right){
		int soluongTapTrai = in_pos-in_left;
		root->right = new Node (preorder[pre_pos+soluongTapTrai+1]);
		buildTree(root->right , in_pos+1 , in_right);
	}
}

void postorder(Node *root){
	if(root==NULL) return;
	postorder(root->left);
	postorder(root-> right);
	cout << root -> data <<" ";
}
int main(){
	cin >> n;
    for(int i = 0 ; i < n ;i++){
		cin >> preorder[i];
	}
	for(int i = 0 ; i < n ;i++){
		cin >> inorder[i];
	}
	Node *root = new Node(preorder[0]);
	buildTree(root , 0 , n-1);
	postorder(root);
	cout << endl;
}