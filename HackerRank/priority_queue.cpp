/*
	Simple implementation of priorityQueue
	using LinkedList and InsertionSort
	07/18/16
	Oyashi
*/

#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int num;
	Node *next;

	Node() {
		num = 0;
		next = NULL;
	}

	Node(int data) {
		num = data;
		next = NULL;
	}

	Node(int data, Node *temp) {
		num = data;
		next = temp;
	}
};

class priorityQueue {
private:
	Node *head, *tail;

public:
	priorityQueue() {
		head = NULL;
		tail = NULL;
	}

	priorityQueue(Node *node) {
		head = node;
	}

	~priorityQueue();

	bool enqueue(Node *newNode);

	void dequeue();

	bool isEmpty();

	void display();
};

priorityQueue::~priorityQueue() {
	Node *current, *temp;
	current = temp = head;
	while (current != NULL) {
		temp = current->next;
		delete current;
		current = temp;
	}
}

bool priorityQueue::enqueue(Node *newNode) {
	if (head == NULL) {		//if the queue is empty
		head = tail = newNode;
	}
	else if(head->next == NULL){	//if the queue has only one node
		if (newNode->num > head->num) {		
			tail = head;
			head = newNode;
		}
		else {
			tail = newNode;
		}
		head->next = tail;
	}
	else {		//if the queue has more than one node
		Node *current = head;
		if (newNode->num > current->num) {
			head = newNode;
			head->next = current;
		}
		else {
			while (current->next != NULL) {
				if (current->next->num < newNode->num) {
					break;
				}
				current = current->next;
			}
			Node *temp = current->next;
			current->next = newNode;
			newNode->next = temp;
		}
	}
	return true;
}

void priorityQueue::dequeue() {
	Node *current;
	while (head != NULL) {
		current = head;
		cout << current->num << endl;
		head = current->next;
		delete current;
	}
}

bool priorityQueue::isEmpty() {
	if (head == NULL) {
		return true;
	}
	return false;
}

void priorityQueue::display() {
	Node *current = head;
	while (current != NULL) {
		cout << current->num << " -> ";
		current = current->next;
	}
}

int main() {
	Node *node = new Node(5);
	priorityQueue *pQueue = new priorityQueue(node);
	int input = 0;
	do{
		cin >> input;
		Node *anotherNode = new Node(input);
		pQueue->enqueue(anotherNode);
	} while (input > 0);

	//pQueue->display();

	pQueue->dequeue();

	if (pQueue->isEmpty()) {
		cout << "Queue is empty" << endl;
	}
	else {
		cout << "Queue is not empty" << endl;
	}

	delete pQueue;

	return 0;
}