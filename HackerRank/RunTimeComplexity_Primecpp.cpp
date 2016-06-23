///*
//Check the run time complexity
//by finding out whether the given number
//is prime or not
//06/20/16
//Oyashi
//
//worstCase - checks if n is divisible by any number from 4 to n
//lessWorstCase - Checks if n is divisible by any number from 2 to n/2
//betterCase - Checks if n is divisible by any number from 2 to sqrt(n)
//bestCase - Checks if n is divisible by 2 or any odd number from 3 to sqrt(n).
//
//The method presented here is the best case
//
//Sample input:
//2
//10000044
//2
//
//Sample output:
//Not Prime
//Prime
//*/
//
//
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//
//int main() {
//	int T = 0, num = 0;
//	bool prime;
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> num;
//		prime = true;
//		if (num == 1) {
//			prime = false;
//		}
//		else if (num == 2) {
//			prime = true;
//		}
//		else if ((num & 1) == 0) {
//			prime = false;
//		}
//		else {
//			for (int j = 3; j < sqrt(num); j = j + 2) {
//				if (num % j == 0) {
//					prime = false;
//					break;
//				}
//			}
//		}
//		if (prime) {
//			cout << "Prime" << endl;
//		}
//		else {
//			cout << "Not prime" << endl;
//		}
//	}
//	return 0;
//}
