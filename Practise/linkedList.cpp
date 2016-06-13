/*
LinkedList -> Init, Append, InsertAt, RemoveAt
06/13/16
Oyashi
*/

#include<iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

class LinkedList {
private:
	Node *head = new Node;

public:
	LinkedList(int inputVal) {
		head->data = inputVal ;
		head->next = NULL;
	}

	~LinkedList() {
		Node *current, *temp;
		current = head;
		temp = head;
		while (current != NULL) {
			temp = current->next;
			delete current;
			current = temp;
		}
	}

	bool initList(int value) {
		head->data = value;
		head->next = NULL;
		return true;
	}

	bool appendList(int inputVal) {
		Node *newNode = new Node;
		newNode->data = inputVal;
		newNode->next = NULL;
		Node *current = head;
		while (current != NULL) {
			if (current->next == NULL) {
				current->next = newNode;
				current = newNode;
				return true;
			}
			current = current->next;
		}
		return false;
		
	}

	bool insertAt(int inputValue, int pos) {
		int count = 0;
		Node *left = head, *right = head;
		Node *newNode = new Node;
		newNode->data = inputValue;
		if (pos > 0) {
			while (right != NULL) {
				if (count == pos) {
					left->next = newNode;
					newNode->next = right;
					return true;
				}
				count++;
				left = right;
				right = right->next;
			}
		}
		return false;
	}

	bool removeAt(int position) {
		int count = 0;
		Node *left, *right;
		left = head;
		right = head;
		while (right != NULL) {
			if (count == position) {
				left->next = right->next;
				delete right;
				return true;
			}
			right = left;
			right = right->next;
			count++;
		}
		return false;
	}

	void printList() {
		Node *current = head;
		while (current != NULL) {
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
};

int main() {
	int input = 0, position = 0;
	cout << "Please enter the input number to initialize the list";
	cin >> input;
	LinkedList list(input);

	char choice;
	do {
		cout << "Please enter the desire choice ";
		cin >> choice;
		switch (choice) {
		case 'a':
			cout << "Please enter the input number ";
			cin >> input;
			list.appendList(input);
			break;
		case 'i':
			cout << "Please enter the input number followed by the positon ";
			cin >> input >> position;
			list.insertAt(input, position);
			break;
		case 'r':
			cout << "Please enter the positon ";
			cin >> position;
			list.removeAt(position);
			break;
		case 'q':
			cout << "Program exiting" << endl;
			break;
		case 'p':
			list.printList();
			break;
		default:
			cout << "Please enter the valid option" << endl;
			break;
		}
	} while (choice != 'q');
	return 0;
}