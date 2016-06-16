/*
	Finding out whether the given word
	is palindrome or not using the
	implementation of stacks and queues

	Question from HackerRank
	06/16/16
	Oyashi

	Sample input
	racecar

	Sample output
	The word, racecar, is a palindrome.

*/

#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

class Solution {
private:
	queue<char> myQueue;
	stack<char> myStack;

public:
	//inserts character into stack
	void pushCharacter(char inputChar) {
		myStack.push(inputChar);
	}

	//inserts character into queue
	void enqueueCharacter(char inputChar) {
		myQueue.push(inputChar);
	}

	//returns and pops character from stack
	char popCharacter() {
		char retVal = myStack.top();
		myStack.pop();
		return retVal;
	}

	//returns and pops character from queue
	char dequeueCharacter() {
		char retVal = myQueue.front();
		myQueue.pop();
		return retVal;
	}

};

int main() {
	// read the string s.
	string s;
	getline(cin, s);

	// create the Solution class object p.
	Solution obj;

	// push/enqueue all the characters of string s to stack.
	for (int i = 0; i < s.length(); i++) {
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}

	bool isPalindrome = true;

	// pop the top character from stack.
	// dequeue the first character from queue.
	// compare both the characters.
	for (int i = 0; i < s.length() / 2; i++) {
		if (obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;

			break;
		}
	}

	// finally print whether string s is palindrome or not.
	if (isPalindrome) {
		cout << "The word, " << s << ", is a palindrome.";
	}
	else {
		cout << "The word, " << s << ", is not a palindrome.";
	}

	return 0;
}