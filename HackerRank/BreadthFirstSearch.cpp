///*
//	Implementation of InOrder, PreOrder, 
//	PostOrder, LevelOrder Traversal in Binary Tree
//
//	06/18/16
//	Oyashi
//
//	Sample input:
//	6
//	3
//	5
//	4
//	7
//	2
//	1
//
//	Sample output:
//	3 2 5 1 4 7
//*/
//
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node *left;
//	Node *right;
//	Node(int data) {
//		this->data = data;
//		left = right = NULL;
//	}
//};
//
//class BinaryTree {
//public:
//	Node* insert(Node* root, int data) {
//		if (root == NULL) {
//			return new Node(data);
//		}
//		else if (data <= root->data) {
//			root->left = insert(root->left, data);
//		}
//		else {
//			root->right = insert(root->right, data);
//		}
//		return root;
//	}
//
//	/*
//		InOrder Traversal
//		Elements processed in left-root-right order
//		Process elements in ascending order
//	*/
//	void inOrder(Node* root) {
//		if (root == NULL) return;
//		inOrder(root->left);
//		cout << root->data << " ";
//		inOrder(root->right);
//	}
//
//	/*
//		PreOrder Traversal
//		Elements processed in root-left-right order
//	*/
//	void preOrder(Node* root) {
//		if (root == NULL) return;
//		cout << root->data << " ";
//		inOrder(root->left);
//		inOrder(root->right);
//	}
//
//	/*
//		PostOrder Traversal
//		Elements processed in left-right-root order
//		Also known as Depth-First-Search
//	*/
//	void postOrder(Node* root) {
//		if (root == NULL) return;
//		inOrder(root->left);
//		inOrder(root->right);
//		cout << root->data << " ";
//	}
//
//	/*
//		LevelOrder Traversal
//		Process elements root-children-grandchildren order
//		Also known as Bread-First-Search
//		Queue is used to track the children at each level
//	*/
//	void levelOrder(Node* root) {
//		queue<Node *> bfs;
//		if (root) {
//			bfs.push(root);
//		}
//		while (!bfs.empty()) {
//			Node* temp = bfs.front();
//			bfs.pop();
//			cout << temp->data << " ";
//			if (temp->left) {
//				bfs.push(temp->left);
//			}
//			if (temp->right) {
//				bfs.push(temp->right);
//			}
//		}
//
//	}
//};
//
//int main() {
//	BinaryTree myTree;
//	Node *root = NULL;
//	int T;
//	cin >> T;
//	int data;
//	for (int i = 0; i < T; i++) {
//		cin >> data;
//		root = myTree.insert(root, data);
//	}
//
//	myTree.levelOrder(root);
//
//	return 0;
//}