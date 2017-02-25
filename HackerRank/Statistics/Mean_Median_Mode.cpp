///*
//	Statistics
//	Day 0 : Mean, Median and Mode
//	Oyashi
//	02/22/2017
//*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//double mean(int *arr, int total);
//double median(int *arr, int total);
//double mode(int *arr, int total);
//void display(int * arr, int total);
//
//int main() {
//	int num = 0;
//	int *numArr;
//	cin >> num;
//	numArr = new int[num];
//	for (int i = 0; i < num; i++)
//	{
//		cin >> numArr[i];
//	}
//	cout << mean(numArr, num) << endl;
//	cout << median(numArr, num) << endl;
//	cout << mode(numArr, num) << endl;
//	delete[] numArr;
//}
//
//double mean(int *arr, int total)
//{
//	int sum = 0;
//	for (int i = 0; i < total; i++)
//	{
//		sum += arr[i];
//	}
//	return (double)sum / total;
//	return 0.0;
//}
//
//double median(int * arr, int total)
//{
//	vector<int> arrVector(arr[0], arr[total-1]);
//
//	sort(arr, arr + total);
//
//	//display(arr, total);
//	if (total % 2 == 0) {
//		int intermediate = total / 2;
//		double median = (arr[intermediate-1] + arr[intermediate]) / 2.0;
//		return median;
//	}
//	else {
//		return (double)arr[(int)ceil(total / 2)];
//	}
//}
//
//double mode(int * arr, int total)
//{
//	map<int, int> modeMap;
//	sort(arr, arr + total);
//	for (int i = 0; i < total; ++i) {
//		++modeMap[arr[i]];
//	}
//
//	//Display map values
//
//	//map<int, int>::iterator mapItr = modeMap.begin();
//	//for (mapItr = modeMap.begin(); mapItr != modeMap.end(); ++mapItr) {
//	//	cout << mapItr->first << " " << mapItr->second << endl;
//	//}
//
//	auto x = std::max_element(modeMap.begin(), modeMap.end(),
//		[](const pair<int, int>& a, const pair<int, int>& b) {
//		return a.second < b.second; });
//
//	return x->first;
//}
//
//void display(int * arr, int total) {
//	for (int i = 0; i < total; ++i)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}