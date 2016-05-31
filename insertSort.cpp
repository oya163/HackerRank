/*
 * insertSort.cpp
 *
 *  Created on: May 29, 2016
 *      Author: oyashi
 */

#include <iostream>

using namespace std;

int main(){
	int a[5] = {3,2,6,4,1};

	int temp;
	int i = 0;

	cout << "Before Sorting" << endl;
	while(i < 5){
		cout << a[i] << endl;
		i++;
	}


	for(i = 0; i < 5; i++){
		int j = i;
		while(j > 0 && a[j-1] > a[j] ){
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j--;
		}
	}

	//Reverse insertSort
	//	for (int i = 0; i < 5; i++) {
	//		for(int j = i+1; j < 5; j++){
	//			if (a[i] > a[j]) {
	//				temp = a[i];
	//				a[i] = a[j];
	//				a[j] = temp;
	//			}
	//		}
	//	}

	cout << "After sorting" << endl;
	i = 0;
	while(i < 5){
		cout << a[i] << endl;
		i++;
	}
	return 0;
}



