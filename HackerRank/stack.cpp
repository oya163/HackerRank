///*
//	Implementation of stack
//	06/16/16
//	Oyashi
//*/
//
//#include <iostream>
//#include <list>
//#include <queue>
//
//using namespace std;
//
//class MyStack {
//private:
//	list<int> *stack;
//
//public:
//	//Constructor
//	MyStack() {
//		stack = new list<int>();
//	}
//
//	//Destructor
//	~MyStack() {
//		while (stack != NULL) {
//			stack->pop_front();
//		}
//	}
//
//	//Check whether the stack is empty
//	bool isEmpty() {
//		return stack->empty();
//	}
//
//	//Check the size of the stack
//	int size() {
//		return stack->size();
//	}
//
//	//Insert an element into the stack
//	void pushElement(int n) {
//		stack->push_back(n);
//	}
//
//	//Remove an element from the stack
//	void popElement() {
//		cout << "Removing  " << stack->back() << endl;;
//		stack->pop_back();
//	}
//
//	//Display the top element
//	void topElement() {
//		cout << stack->back() << endl;
//	}
//
//	//Display all the elements
//	void display() {
//		for (list<int>::iterator it = stack->begin(); it != stack->end(); it++) {
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//
//};
//
//int main() {
//	MyStack *newStack = new MyStack();
//
//	int input = 0;
//	do {
//		cout << "Please enter the input " << endl;
//		cin >> input;
//		newStack->pushElement(input);
//	} while (input > 0);
//
//	cout << "Now displaying the elements" << endl;
//	newStack->display();
//
//	cout << "The top elements is " << endl;
//	newStack->topElement();
//
//	//Checking the size of stack before removal
//	cout << "The size of stack is " << endl;
//	cout << newStack->size() << endl;
//
//
//	while (!(newStack->isEmpty())) {
//		newStack->popElement();
//	}
//
//	//Checking the size of stack after removal
//	cout << "The size of stack is " << endl;
//	cout << newStack->size() << endl;
//
//
//	return 0;
//}