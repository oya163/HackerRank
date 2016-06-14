/*
	Exception handling
	06/14/16
	Oyashi

	Sample Input
	4
	3 5
	2 4
	-1 -2
	-1 3

	Sample Output
	243
	16
	n and p should be non-negative
	n and p should be non-negative


*/

#include <iostream>
#include <math.h>


using namespace std;

class Calculator {
private:
	int result = 0;

public:
	Calculator() {
		result = 0;
	}

	int power(int n, int p) {
		if (n < 0 || p < 0) {
			throw std::invalid_argument("n and p should be non-negative");
			return 1;
		}
		else {
			return pow(n, p);
		}
	}

};

int main()
{
	Calculator myCalculator = Calculator();
	int T, n, p;
	cin >> T;
	while (T-->0) {
		if (scanf_s("%d %d", &n, &p) == 2) {
			try {
				int ans = myCalculator.power(n, p);
				cout << ans << endl;
			}
			catch (exception& e) {
				cout << e.what() << endl;
			}
		}
	}

}