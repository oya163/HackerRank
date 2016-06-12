/*
	Implement an algorithm to determine if a string has all unique characters. 
	What if you can not use additional data structures?
	Date: 06/11/2016
	Oyashi
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	bool unique = true;
	int matchCount = 0;
	cout << "Please enter the input string "; cin >> input;
	for (int i = 0; i < input.length(); i++) {
		for (int j = 0; j < input.length(); j++) {
			if (input[i] == input[j]) {
				matchCount++;
				if (matchCount > 1) {
					unique = false;
					break;
				}
			}
		}
		matchCount = 0;
		if (!unique) {
			break;
		}
	}

	if (unique) {
		cout << input << " is unique string" << endl;
	}
	else {
		cout << input << " is not unique string" << endl;
	}
	return 0;
}