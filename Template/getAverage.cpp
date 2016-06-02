/*
 * getAverage.cpp
 *
 *  Created on: Jun 1, 2016
 *      Author: oyashi
 */

#include <iostream>
#include <algorithm>

using namespace std;

template<class T>
double getAverage(T tArray[], int nElements) {
	T tSum = T();

	for (int i = 0; i < nElements; i++) {
		tSum = tSum + tArray[i];
	}

	return double(tSum) / nElements;
}

int main() {
	int iArray[] = { 4, 7, 2, 6, 9 };
	double dArray[] = { 7.4, 8.7, 9.0, 2.5, 4.8 };

	cout << "Average of integer array " << getAverage(iArray,5) << endl;
	cout << "Average of double array " << getAverage(dArray,5) << endl;

	return 0;
}

