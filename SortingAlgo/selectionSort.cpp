/*
 * selectionSort.cpp
 *
 *  Created on: May 29, 2016
 *      Author: oyashi
 */

#include <iostream>

using namespace std;

int main() {
	int a[5] = { 3, 2, 6, 4, 1 };
	int temp = 0;
	int min = 0;
	cout << "Before sort" << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}


	int minIndex = 0;
	bool swap = false;
	for (int i = 0; i < 5; i++) {
		min = a[i];
		for (int j = i+1; j < 5; j++) {
			if (min > a[j]) {
				min = a[j];
				minIndex = j;
				swap = true;
			}
		}
		if(swap){
			temp = a[i];
			a[i] = min;
			a[minIndex] = temp;
			swap = false;
		}

	}

	cout << "After sort" << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}

	return 0;
}

