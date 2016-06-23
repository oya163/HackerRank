///*
//	String anagram
//	06/11/16
//	Oyashi
//*/
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int anagram(string word1, string word2) {
//	int countMatch = 0;
//	bool onePass = true;
//	for (int i = 0; i < word1.length(); i++) {
//		for (int j = 0; j < word2.length(); j++) {
//			if (word1[i] == word2[j] && onePass) {
//				cout << word1[i];
//				countMatch++;
//				onePass = false;
//			}
//		}
//		onePass = true;
//	}
//	cout << endl;
//	cout << countMatch << endl;
//	cout << word1.length() << endl;
//	if (countMatch != word1.length()) {
//		countMatch = 0;
//	}
//	cout << countMatch << endl;
//	return countMatch;
//}
//
//int main() {
//	string firstWord, secondWord;
//	cout << "Please enter first word : " << endl;
//	getline(cin, firstWord);
//	cout << "Please enter second word : " << endl;
//	getline(cin, secondWord);
//	int firstCount = anagram(firstWord, secondWord);
//	int secondCount = anagram(secondWord, firstWord);
//	if (firstCount == 0 || secondCount == 0) {
//		cout << "The words are not anagram of each other " << endl;
//	}
//	else {
//		cout << "The words are anagram " << endl;
//	}
//	return 0;
//}