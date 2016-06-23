///*
//	Binary Search Tree Implementation
//	Creates Tree, Search node, Remove node
//	Find Max, Min, MaxDepth and Displays Tree
//	06/17/16
//	Oyashi
//*/
//
//#include <iostream>
//
//using namespace std;
//
////Simple node structure
//struct Node {
//	int data;
//	Node *left, *right;
//};
//
////Creates a new Node
//Node* createNewNode(int data) {
//	Node* newNode = new Node();
//	newNode->data = data;
//	newNode->left = newNode->right = NULL;
//	return newNode;
//}
//
////Insert function 
////Please change the return type to Node* if you are passing 
////pointer-to-Node to this function
//void insertNode(Node** rootPtr, int data) {
//	if (*rootPtr == NULL) {
//		*rootPtr = createNewNode(data);
//	}
//	else if (data <= (*rootPtr)->data) {
//		//rootPtr->left =
//			insertNode(&(*rootPtr)->left, data);
//	}
//	else {
//		//rootPtr->right = 
//			insertNode(&(*rootPtr)->right, data);
//	}
//	//return rootPtr;
//}
//
///*
//	Search function to search the given data in the tree
//*/
//bool searchNode(Node* rootPtr, int data) {
//	if (rootPtr == NULL) { return false; }
//	else if (rootPtr->data == data) { return true; }
//	else if (data <= rootPtr->data) { searchNode(rootPtr->left, data); }
//	else {
//		searchNode(rootPtr->right, data);
//	}
//}
//
//Node* findMin(Node* rootPtr) {
//	while (rootPtr->left != NULL) {
//		rootPtr = findMin(rootPtr->left);
//	}
//	return rootPtr;
//}
//
//Node* findMax(Node* rootPtr) {
//	while (rootPtr->right != NULL) {
//		rootPtr = findMax(rootPtr->right);
//	}
//	return rootPtr;
//}
//
//Node* removeNode(Node* rootPtr, int data) {
//	if (rootPtr == NULL) { return rootPtr; }
//	else if (data < rootPtr->data) { rootPtr->left = removeNode(rootPtr->left, data); }
//	else if (data > rootPtr->data) { rootPtr->right = removeNode(rootPtr->right, data); }
//	else {
//		//First case: when there is no child nodes
//		if (rootPtr->left == NULL && rootPtr->right == NULL) {
//			delete rootPtr;
//			rootPtr = NULL;
//		}
//		//Second case: when there is only right node
//		else if (rootPtr->left == NULL) {
//			Node* temp = rootPtr;
//			rootPtr = rootPtr->right;
//			delete temp;
//		}
//		//Second case: when there is only left node
//		else if (rootPtr->right == NULL) {
//			Node* temp = rootPtr;
//			rootPtr = rootPtr->left;
//			delete temp;
//		}
//		//Third case: when there are two child nodes
//		else {
//			Node *min = findMin(rootPtr->right);
//			rootPtr->data = min->data;
//			rootPtr->right = removeNode(rootPtr->right, min->data);
//		}
//	}
//	return rootPtr;
//}
//
//void display(Node* rootPtr) {
//	if (rootPtr == NULL) return;
//	display(rootPtr->left);
//	cout << rootPtr->data << " ";
//	display(rootPtr->right);
//}
//
//void DisplayTree(Node* root) {
//	cout << endl;
//	cout << "Display the tree in sorted order" << endl;
//	display(root);
//	cout << endl;
//	cout << endl;
//}
//
//Node* RemoveNode(Node* root) {
//	int data;
//	cout << "Please enter the node to be deleted "; cin >> data;
//	root = removeNode(root, data);
//	return root;
//}
//
//void SearchTree(Node* root) {
//	//Operation to search the value in the tree
//	int searchValue = 0;
//	do {
//		cout << "Please enter the data to be searched "; cin >> searchValue;
//		if (searchNode(root, searchValue) == true) { cout << "Found" << endl; }
//		else {
//			cout << "Not Found " << endl;
//		}
//	} while (searchValue > 0);
//}
//
//Node* CreateTree(Node* root) {
//	int numOfTest;
//	cout << "Enter the number of test cases " << endl;
//	cin >> numOfTest;
//
//	//Operation to enter the data into the tree
//	int data = 0;
//	for (int i = 0; i < numOfTest; i++) {
//		cout << "Please enter the data "; cin >> data;
//		//Passing the address of root Node
//		insertNode(&root, data);
//	}
//	return root;
//}
//
//void FindMaximum(Node* root) {
//	Node* max = findMax(root);
//	cout << "The maximum value = " << max->data << endl;
//}
//
//void FindMinimum(Node* root) {
//	Node* min = findMin(root);
//	cout << "The minimum value = " << min->data << endl;
//}
//
//int maxDepth(Node* root) {
//	if (root == NULL) {
//		return -1;
//	}
//
//	int leftDepth = maxDepth(root->left);
//	int rightDepth = maxDepth(root->right);
//
//	return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
//}
//
//void FindHeight(Node* root) {
//	int height = maxDepth(root);
//	cout << "The maximum heigh of the tree = " << height << endl;
//}
//
///*
//	Main function
//*/
//int main() {
//	Node* root = NULL;
//
//	char choice;
//	do {
//		cout << "Create a tree - c" << endl;
//		cout << "Search a node - s" << endl;
//		cout << "Remove a node - r" << endl;
//		cout << "Display the tree - d" << endl;
//		cout << "Find Maximum value - m" << endl;
//		cout << "Find Minimum value - n" << endl;
//		cout << "Find height - h" << endl;
//		cout << "Quit - q" << endl;
//		cout << "Please enter the choice " << endl;
//		cin >> choice;
//		cout << endl;
//		switch (choice) {
//		case 'c':
//			root = CreateTree(root);
//			break;
//
//		case 's':
//			SearchTree(root);
//			break;
//
//		case 'r':
//			root = RemoveNode(root);
//			break;
//
//		case 'd':
//			DisplayTree(root);
//			break;
//
//		case 'm':
//			FindMaximum(root);
//			break;
//
//		case 'n':
//			FindMinimum(root);
//			break;
//
//		case 'h':
//			FindHeight(root);
//			break;
//
//		default:
//			cout << "Please enter the valid option" << endl;
//			break;
//		}
//	} while (choice != 'q');
//
//	delete root;
//	return 0;
//}