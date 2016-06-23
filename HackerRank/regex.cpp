/*
	Implementation of Regular Expression
	06/22/16
	Oyashi
*/

#include <iostream>
#include <regex>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<string> firstNameVector;

	regex email_regex("([a-z]+)@gmail\\.com");
	for (int a0 = 0; a0 < N; a0++) {
		string firstName;
		string emailID;
		cin >> firstName >> emailID;

		smatch base_match;
		if (regex_match(emailID, base_match, email_regex)) {
			if (base_match.size() == 2) {
				std::ssub_match base_sub_match = base_match[1];
				std::string base = base_sub_match.str();
				firstNameVector.push_back(firstName);
			}
		}
	}

	sort(firstNameVector.begin(), firstNameVector.end());

	for (vector<string>::iterator it = firstNameVector.begin(); it != firstNameVector.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}