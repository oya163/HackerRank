/*
 * printTwice.cpp
 *
 *  Created on: May 31, 2016
 *      Author: oyashi
 */

#include <iostream>


using namespace std;

template <class A>
A Twice(A data){
	return data * 2;
}

template <class T> T Add(T a1, T a2){
	T result;
	result = a1 + a2;
	return result;
}

int main(){

	cout << Twice(10) << endl;
	cout << Twice(5.125) << endl;

	cout << "We are adding numbers" << endl;
	cout << Add(10,5) << endl;
	cout << Add(5.65,4.87) << endl;

}



