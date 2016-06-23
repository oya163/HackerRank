/*
	Problem from StackOverflow
	06/15/16
	Oyashi
*/

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <istream>

using namespace std;

int main()
{
	ifstream infile("text.txt");
	char str[50]; int strSize = 50;int count = 0;
	while (infile.getline(str, strSize, '.')) {count++;}
	cout << "Total number of lines are:" << count << endl;
	infile.close();
	return 0;
}