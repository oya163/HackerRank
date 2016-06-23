/*
	Sherlock Holmes suspects his archenemy, Professor Moriarty, is once again plotting 
	something diabolical. Sherlock's companion, Dr. Watson, suggests Moriarty may be 
	responsible for MI6's recent issues with their supercomputer, The Beast.

	Shortly after resolving to investigate, Sherlock receives a note from Moriarty 
	boasting about infecting The Beast with a virus; however, he also gives him a 
	clue—a number, N. Sherlock determines the key to removing the virus is to find the 
	largest Decent Number having N digits.

	A Decent Number has the following properties:

    Its digits can only be 3's and/or 5's.
    The number of 3's it contains is divisible by 5.
    The number of 5's it contains is divisible by 3.
    If there are more than one such number, we pick the largest one.

	Moriarty's virus shows a clock counting down to The Beast's destruction, 
	and time is running out fast. Your task is to help Sherlock find the key 
	before The Beast is destroyed!

	Input Format
	The first line is an integer, T, denoting the number of test cases.
	The T subsequent lines each contain an integer, N, detailing the 
	number of digits in the number.

	Output Format
	Print the largest Decent Number having N digits; 
	if no such number exists, tell Sherlock by printing -1.

	Sample Input:
	4
	1
	3
	5
	11

	Sample Output
	-1
	555
	33333
	55555533333
*/

#include<iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


void displayResult(string s) {
	cout << s;
}

/*
	To check if the given number perfectly matches
	the given criteria or not
*/
bool canBeSolved_For_5(int N) {
	bool is_a_match = false;
	int remainder = 0, times = 0;
	int no_of_five, no_of_three;
	times = N / 5;
	for (int i = 1; i <= times; i++) {
		remainder = N - (5 * i);
		if (remainder % 3 == 0) {
			is_a_match = true;
			no_of_five = remainder;
			no_of_three = 5 * i;
			break;
		}
	}

	vector<string> finalResult (1,"-1");
	vector<string> subResult;
	if (is_a_match) {
		finalResult.assign(no_of_five, "5");
		subResult.assign(no_of_three, "3");
		finalResult.insert(finalResult.end(), subResult.begin(), subResult.end());
		for_each(finalResult.begin(), finalResult.end(), displayResult);
	}
	return is_a_match;
}


/*
To check if the given number perfectly matches
the given criteria or not
*/
bool canBeSolved_For_3(int N) {
	bool is_a_match = false;
	int remainder = 0, times = 0;
	int no_of_five, no_of_three;
	times = N / 3;
	for (int i = 1; i <= times; i++) {
		remainder = N - (3 * i);
		if (remainder % 3 == 0) {
			is_a_match = true;
			no_of_five = remainder;
			no_of_three = 5 * i;
			break;
		}
	}

	vector<string> finalResult(1, "-1");
	vector<string> subResult;
	if (is_a_match) {
		finalResult.assign(no_of_five, "5");
		subResult.assign(no_of_three, "3");
		finalResult.insert(finalResult.end(), subResult.begin(), subResult.end());
	}
	return is_a_match;
}



int main() {
	int t;
	int fiveCount = 0, threeCount = 0;
	vector<string> result;

	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		if (n <= 1) {
			cout << -1 << endl;
		}
		else if(n % 3 == 0 && n % 5 == 0) {
			bool isSolvable = canBeSolved_For_5(n);
		}
		else if (n % 3 == 0) {
			result.assign(n, "5");
		}
		else if (n % 5 == 0) {
			result.assign(n, "3");
		}
		else {
			bool isSolvable = canBeSolved_For_5(n);
		}

		for_each(result.begin(), result.end(), displayResult);
		cout << endl;
	}

	return 0;
}