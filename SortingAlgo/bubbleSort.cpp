/*
 * bubbleSort.cpp
 *
 *  Created on: May 29, 2016
 *      Author: oyashi
 */

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
	vector<int> a;
	srand(rand());

	for(int i = 1; i <= 5; i++){
		a.push_back(rand() % 100);
	}

	int temp = 0;

	cout << "Before sorting" << endl;
	for(vector<int>::iterator i = a.begin(); i != a.end(); i++){
		cout << *i << endl;
	}

	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < a.size(); j++){
			if(a[j] > a[j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << "After sorting" << endl;
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << endl;
	}

	return 0;
}


