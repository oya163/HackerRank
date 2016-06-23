///*
//	Lisa just got a new math workbook. A workbook contains exercise problems, grouped into chapters.
//
//    There are n chapters in Lisa's workbook, numbered from 1 to n.
//    The i-th chapter has ti problems, numbered from 1 to ti .
//    Each page can hold up to k problems. There are no empty pages or unnecessary spaces, so only the last page of a chapter may contain fewer than k problems.
//    Each new chapter starts on a new page, so a page will never contain problems from more than one chapter.
//    The page number indexing starts at 1.
//
//Lisa believes a problem to be special if its index (within a chapter) is the same as the page number where it's located. Given the details for Lisa's workbook, can you count its number of special problems?
//
//Note: See the diagram in the Explanation section for more details.
//
//	Input sample:
//	5 3
//	4 2 6 1 10
//
//	Output sample:
//	4
//*/
//
//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	/*
//		Actually, map and vectors are not necessary
//		to solve this problem. I used these just
//		for my own convenience.
//	*/
//	typedef map<int, int> inside_chapter;
//	inside_chapter inChapter;
//	vector<inside_chapter> chapter;
//
//	int N, K, specialProblem = 0;
//	int pgNum = 1;
//	cin >> N >> K;
//	int* t = new int[N];
//
//	//Takes the number of exercises in each chapter
//	for (int i = 0; i < N; i++) {
//		cin >> t[i];
//	}
//
//	int prevPgNum = pgNum;
//	for (int i = 0; i < N; i++) {
//		for (int j = 1; j <= t[i]; j++) {
//			//Uncomment below to check each exercise
//			//and their relevant page number
//			//cout << j << " " << pgNum << endl;
//			if (j == pgNum) {
//				specialProblem++;
//			}
//			inChapter.insert(inChapter.begin(),pair<int, int>(j, pgNum));
//			prevPgNum = pgNum;
//			if (j % K == 0) {
//				pgNum++;
//			}
//		}
//		/*
//			This section prevents from incrementing 
//			page number twice when there is number like 6
//		*/
//		if (prevPgNum == pgNum) {
//			pgNum++;
//		} 
//		cout << endl;
//		chapter.insert(chapter.begin(), inChapter);
//	}
//
//	/*
//		Uncomment this to check the elements inside the map of each vector
//		However, the elements of first vector are overwriting the
//		elements of later vectors.
//	*/
//	//for (int i = 0; i < N; i++){
//	//	for (map<int, int>::iterator mt = chapter[i].begin(); mt != chapter[i].end(); mt++) {
//	//		cout << mt->first << " " << mt->second << endl;
//	//	}
//	//	cout << endl;
//	//}
//
//	cout << "Number of special problem = " << specialProblem << endl;
//
//}