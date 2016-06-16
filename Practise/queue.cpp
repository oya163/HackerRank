/*
	Implementation of queues
	06/14/16
	Oyashi
*/

#include <iostream>
#include <list>

using namespace std;

class MyQueue {
private:
	list<int> *que;

public:
	MyQueue() {
		que = new list<int>();
	}

	~MyQueue(){
		while (que != NULL) {
			que->pop_front();
		}
	}

	bool isEmpty() {
		return que->empty();
	}

	int sizeOfQueue() {
		return que->size();
	}

	void enqueue(int n) {
		que->push_back(n);
	}

	void peek(int n) {
		list<int>::iterator it = que->begin(); 
		advance(it, n);
		cout << (int)*it << endl;
	}

	void dequeue() {
		que->pop_back();
	}

	void display() {
		cout << endl;
		for (list<int>::iterator it = que->begin(); it != que->end(); it++) {
			cout << (int)*it << endl;
		}
		cout << endl;
	}
};



int main() {
	MyQueue *newQueue = new MyQueue();

	int input = 0;
	do {
		cout << "Please enter the input " << endl;
		cin >> input;
		newQueue->enqueue(input);
	} while (input > 0);

	cout << "Now displaying the elements" << endl;
	newQueue->display();

	while (!(newQueue->isEmpty())) {
		cout << newQueue->isEmpty() << endl;
		cout << "Dequeing " << endl;
		newQueue->dequeue();
	}



	return 0;
}