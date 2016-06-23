/*
	Template programming
	06/17/16
	Oyashi
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
void printArray(vector<T> &elem) {
	for (vector<T>::iterator it = elem.begin(); it != elem.end(); it++) {
		cout << *it << endl;
	}
}

int main() {
	vector<int> number{ 1,2,3 };
	vector<string> name{ "Oyesh", "Mann", "Singh" };

	printArray<int> (number);
	printArray<string> (name);

	return 0;
}