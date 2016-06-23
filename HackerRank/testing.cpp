///*
//	Day 27: Testing
//	06/21/16
//	Oyashi
//
//	Problem:
//	A Discrete Mathematics professor has a class of students. 
//	Frustrated with their lack of discipline, the professor decides to cancel class 
//	if fewer than students are present when class starts. 
//	Given the arrival time of each student, determine if the class is canceled.
//
//	Input Format
//	The first line of input contains T, the number of test cases.
//	Each test case spans two lines. 
//	The first has two space-separated integers, N(students in the class) and K(the cancelation threshold). 
//	The second contains N space-separated integers describing the students' arrival times as array a().
//
//	Note: Non-positive arrival times (ai <= 0) indicate the student arrived early or on time; 
//	positive arrival times (ai > 0) indicate the student arrived minutes late. 
//	If a student arrives exactly on time (ai = 0), the student is considered to have entered before the class started.
//
//	Output Format
//	For each test case, print the word YES if the class is canceled or NO if it is not.
//
//	Sample input
//	2
//	4 3
//	-1 -3 4 2
//	4 2
//	0 -1 2 1
//
//	Sample output
//	YES
//	NO
//*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////Checks whether T <= 5
//void checkT(int T) {
//	if (T <= 5) {
//		cout << T << endl;
//	}
//	else {
//		throw "T is out of range";
//	}
//}
//
///* 
//	Check N if it is within the given range
//*/
//void checkN(int N) {
//	for (int i = 0; i < N; i++) {
//		if (N > 0 && N <= 200) {
//			continue;
//		}
//		else {
//			throw "N is out of range\n";
//		}
//	}
//	
//}
////Checks given N is unique of not
////If it is unique then pushes into vector<int>
//void checkNUnique(int N) {
//	static vector<int> arrayN;
//	vector<int>::iterator it;
//	it = find(arrayN.begin(), arrayN.end(), N);
//	//if N is not found
//	if (it == arrayN.end()) { 
//		arrayN.push_back(N);
//		cout << N << " ";
//	}
//	//if N is found
//	else { 
//		throw "N is not unique number\n";
//	}
//}
//
////Checks whether K is between 1 and N
//void checkK(int N, int K){
//	if (K >= 1 && K <= N) {
//		cout << K << endl;
//	}
//	else {
//		throw "K is out of range.\n";
//	}
//}
//
//
////This code actually prints whether the class
////will be cancelled or not based on the 
////number of students attending the class
////within the time threshold
//void mainCode(int T, int N, int K, int a, int inClass) {
//	for (int j = 0; j < T; j++) {
//		cin >> N >> K;
//		for (int i = 0; i < N; i++) {
//			cin >> a;
//			if (a <= 0) {
//				inClass++;
//			}
//		}
//		if (inClass >= K) {
//			cout << "NO" << endl;
//		}
//		else {
//			cout << "YES" << endl;
//		}
//	}
//}
//
////Checks if the time(data of array) given 
////in the input is within the given range or not
//void checkArrayLimit(int a[], int N) {
//	for (int i = 0; i < N; i++) {
//		if (a[i] >= -1000 && a[i] <= 1000) {
//			continue;
//		}
//		else {
//			throw ("a[%d] is out of range", i);
//		}
//	}
//}
//
///*
//	Checks if the array contains at least
//	one positive, one negative and one zero
//*/
//void checkArrayType(int a[], int N) {
//	int countNeg = 0, countZero = 0, countPos = 0;
//	for (int i = 0; i < N; i++) {
//		if (a[i] < 0) {
//			countNeg++;
//		}
//		else if (a[i] == 0) {
//			countZero++;
//		}
//		else {
//			countPos++;
//		}
//	}
//	if (countNeg > 0 && countPos > 0 && countZero > 0) {
//		for (int i = 0; i < N; i++) {
//			cout << a[i] << " ";
//		}
//
//	}
//	else {
//		throw "Give numbers should have at least one negative, positive and zero";
//	}
//}
//
///*
//	Main
//*/
//int main() {
//	int T, N, K, a = 0;
//
//	cin >> T;
//	try {
//		checkT(T);
//	}
//	catch (const char *msg) {
//		cout << msg << endl;
//	}
//
//	for (int j = 0; j < T; j++) {
//		cin >> N >> K;
//		int* b = new int[N];
//		try {
//			checkN(N);
//		}
//		catch (const char *msg) {
//			cout << msg << endl;
//		}
//
//		try {
//			checkNUnique(N);
//		}
//		catch (const char *msg) {
//			cout << msg << endl;
//		}
//
//		try {
//			checkK(N,K);
//		}
//		catch (const char *msg) {
//			cout << msg << endl;
//		}
//
//		for (int i = 0; i < N; i++) {
//			cin >> a;
//			b[i] = a;
//		}
//		try {
//			checkArrayLimit(b, N);
//		}
//		catch (const char *msg) {
//			cout << msg << endl;
//		}
//
//		try {
//			checkArrayType(b, N);
//			cout << endl;
//		}
//		catch (const char *msg) {
//			cout << msg << endl;
//		}
//
//	}
//
//}