/*
	Day 0:
	Find weigted mean
	02/25/2017
	Oyashi
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double findWeightedMean(int *arr, int *weights, int size);

int main() {
	int n = 0, a = 0;
	cin >> n;
	int *num = new int[n];
	int *weights = new int[n];
	for (int i = 0; i < n; i++) cin >> num[i];
	for (int i = 0; i < n; i++) cin >> weights[i];
	float retVal = ceilf(findWeightedMean(num, weights, n) * 100) / 100;
	printf("%.1f\n", retVal);
	return 0;
}

double findWeightedMean(int *arr, int *weights, int size) {
	double numerator = 0, denominator = 0;
	for (int i = 0; i < size; i++) {
		numerator += arr[i] * weights[i];
	}

	for (int i = 0; i < size; i++) {
		denominator += weights[i];
	}


	return numerator / denominator;
}