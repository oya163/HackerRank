/*
	Comparing the run time complexity
	of different methods performing
	same task
	06/19/16
	Oyashi
*/

#include<iostream>
#include<map>
#include <unordered_map>
#include<ctime>
#include<chrono>

using namespace std;


class RunTime {
public:
	//Linear time taking function O(n)
	int findRepetitions(string inputString, char ch) {
		int sum = 0;
		for (int i = 0; i < inputString.length(); i++) {
			if (inputString[i] == ch) {
				sum++;
			}
		}
		return sum;
	}

	//Quadratic time taking function O(n^2)
	int* findRepetitions_v1(string inputString, char ch[]) {
		int* sum = new int[strlen(ch)];
		for (int i = 0; i < inputString.length(); i++) {
			for (int j = 0; j < strlen(ch); j++) {
				if (inputString[i] == ch[j]) {
					sum[j]++;
				}
			}
		}
		return sum;
	}

	//Linear time taking function O(n)
	int* findRepetitions_v2(string inputString, char ch[]) {
		int* sum = new int[strlen(ch)];
		unordered_map<char, int> myMap;
		for (int i = 0; i < inputString.length(); i++) {
			if (myMap.find(inputString[i]) == myMap.end()) {
				myMap.insert(pair<char,int>(inputString[i], 1));
			}
			else {
				int tempSum = myMap.at(inputString[i]);
				myMap.insert(pair<char, int>(inputString[i], tempSum + 1));
			}
		}

		for (int j = 0; j < strlen(ch); j++) {
			if (myMap.find(ch[j]) == myMap.end()) {
				sum[j] = 0;
			}
			else {
				sum[j] = myMap.at(ch[j]);
			}
		}
		return sum;
	}
};

int main() {
	RunTime runAlgo;
	auto startTime = chrono::high_resolution_clock::now();
	cout << runAlgo.findRepetitions("oyeuirpoqrieopwqurepoiuqrpoiwofsaj;nvcxllvcxz;hjf;dsak;lfdjsakl;joirewquroipu84-815902954phjtro;jkf;dnvlnxzmvcnzkfgjsak;fdjsajorequofjdopurepoqwuroiu408-1580-145ijpoaf[aioi[fidsakrel;wqnresh", 'o') << endl;
	auto endTime = chrono::high_resolution_clock::now();
	chrono::duration<double, std::milli> durationChrono = (endTime - startTime);
	cout << "Duration : " << durationChrono.count() << endl;


	char a[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'a', 'b', 'c', 'd', 'e', 'f', 'a', 'b', 'c', 'd', 'e', 'f', 'a', 'b', 'c', 'd', 'e', 'f' };
	cout << strlen(a) << endl;
	startTime = chrono::high_resolution_clock::now();
	int* sumv1 = runAlgo.findRepetitions_v1("oyeuirpoqrieoaabpwqurepoiuqjfdlk;ajfkd;lajfkdl;sajfkd;lsajf;dlkuroiewqeri[vjzkl;rpoiwofsafdafdsafdsafdsafdsafdsafdsafdsafdsafdsahgdhtuyriuykjhxbvcxbcxbfdkjsa;lkfdjsak;lruoipwqureiowpqnxnvl457389105jsajfk;dsnm,vc.nx;rewtregtrgfdshgj;nvcxllvcxz;hjf;dsak;lfdjsakl;joirewquroipu84-815902954phjtro;jkf;dnvlnxzmvcnzkfgjsak;fdjsajorequofjdopurepoqwuroiu408-1580-145ijpoaf[aioi[fidsakrel;wqnresh", a);
	endTime = chrono::high_resolution_clock::now();
	durationChrono = (endTime - startTime);
	cout << "Duration : " << durationChrono.count() << endl;

	startTime = chrono::high_resolution_clock::now();
	int* sumv2 = runAlgo.findRepetitions_v2("oyeuirpoqrieoaabpwqurepoiuqjfdlk;ajfkd;lajfkdl;sajfkd;lsajf;dlkuroiewqeri[vjzkl;rpoiwofsafdafdsafdsafdsafdsafdsafdsafdsafdsafdsahgdhtuyriuykjhxbvcxbcxbfdkjsa;lkfdjsak;lruoipwqureiowpqnxnvl457389105jsajfk;dsnm,vc.nx;rewtregtrgfdshgj;nvcxllvcxz;hjf;dsak;lfdjsakl;joirewquroipu84-815902954phjtro;jkf;dnvlnxzmvcnzkfgjsak;fdjsajorequofjdopurepoqwuroiu408-1580-145ijpoaf[aioi[fidsakrel;wqnresh", a);
	endTime = chrono::high_resolution_clock::now();
	durationChrono = (endTime - startTime);
	cout << "Duration : " << durationChrono.count() << endl;

	delete sumv1, sumv2;
	return 0;
}