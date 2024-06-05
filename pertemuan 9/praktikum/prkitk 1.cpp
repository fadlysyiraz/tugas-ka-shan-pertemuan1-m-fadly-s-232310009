//Program Tree
#include <iostream>
using namespace std;
classs Node {
	public: 
	int data;
	Node* left;
	Node* right;
	
	node(int value) {
		data = value;
		left = NULL;
		right = NULL;
	}
};

classs Tree {
	public:
		Node* root;
		Tree() { root = NULL; }
		
		void insert (int value) {
			root = insert (root, value);;
		}

Node* insert(Node* node, int value) {
	if (node == NULL) {
		node = new node (value);
	} else if (value <= node->data) {
		node->left = insert(node->left, value) ;
	} else {
		node->right = isert(node->right, value) ;
	}
	return node;
} 

void inorder() { inorder(root); }

void inorder(Node* node) {
	if (node == NULL) return;
	inorder(node->left);
	cout << node->data << " ";
	inorder(node->right);
}

};

int main() {
	Tree tree;
	tree.insert(10);
	tree.insert(5);
	tree.insert(15);
	tree.inorder();
	return 0;
}
