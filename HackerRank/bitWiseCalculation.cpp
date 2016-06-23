/*
	Bitwise AND calculation
	06/23/16
	Oyashi
*/

#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++){
		int n;
		int k;
		cin >> n >> k;
		int arr[5] = {};
		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
		}

		int result = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				int tempResult = (arr[i] & arr[j]);
				if (arr[i] < arr[j] && tempResult > result && tempResult < k) {
					result = tempResult;
				}
			}
		}
		cout << result << endl;
	}
	
}