/*
	Attribute Parser
	06/20/16
	Oyashi
*/

#include <vector>
#include <iostream>
#include <string>
#include <regex>
#include <istream>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

void displayResult(string s) {
	cout << s;
}


int main() {
	int N, Q;
	cin >> N >> Q;

	//tagValue stores 'value' or 'name' as key and the value ("HelloWorld","Name1")
	//it directs as the value in the map
	typedef map<string, string> tagValues;

	//tagName stores the above map according to the tagNumber like tag1, tag2
	vector<tagValues> tagName;

	//attributes stores only the attributes passed on by user
	vector<string> attributes;

	//queries stores only queries passed on by user
	vector<string> queries;

	//regular expression to parse tag
	regex tagRegex("<([a-z0-9]+) (value|name) = \\\"([a-zA-z0-9]+)\\\">");

	//regular expression to parse queries
	regex queryRegex("([a-z0-9\\.]+)~(value|name)");

	//Input taken for attributes
	string inputAttributes;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, inputAttributes);
		attributes.push_back(inputAttributes);
	}

	//Input taken for queries
	for (int i = 0; i < Q; i++) {
		string inputQueries;
		cin >> inputQueries;
		queries.push_back(inputQueries);
	}

	typedef vector<string> attributeType;
	attributeType attType;
	vector<attributeType> attributeNum;

	/*
		This section is used for parsing the HRML values
	*/
	smatch base_match;
	for (int i = 0; i < N; i++) {
		if (regex_match(attributes[i], base_match, tagRegex)) {
			//cout << base_match.size() << endl;
			if (base_match.size() == 4) {
				int size = base_match.size();
				for (int j = 1; j <= size; j++) {
					std::ssub_match base_sub_match = base_match[j];
					std::string base = base_sub_match.str();
					attType.push_back(base);
				}
				
			}
		}
		attributeNum.push_back(attType);
		attType.clear();
	}

	//Uncomment to display the values saved in attributeNum vector
	//for (int j = 0; j < attributeNum.size(); j++) {
	//	for_each(attributeNum[j].begin(), attributeNum[j].end(), displayResult);
	//}
	
	/*
		This section is used for parsing query values.
	*/
	vector<string> queType;
	smatch query_base_match;
	for (int i = 0; i < Q; i++) {
		if (regex_match(queries[i], query_base_match, queryRegex)) {
			//cout << query_base_match.size() << endl;
			if (query_base_match.size() == 3) {
				int size = query_base_match.size()-1;
				for (int j = 1; j <= size; j++) {
					std::ssub_match query_base_sub_match = query_base_match[j];
					std::string base = query_base_sub_match.str();
					queType.push_back(base);
				}
			}
		}
	}
	
	//Uncomment to check what's stored in queType
	//for_each(queType.begin(), queType.end(), displayResult);
	
	
	/*
		This section checks the query matches with attributes or not
	*/
	bool notFound = true;
	//cout << queType.size() << endl;
	vector<string> multipleTag;
	for (int i = 0; i < queType.size() - 1; i = i + 2) {
		/*
		Uncomment to check the value of QueType
		cout << "Value of I = " << i << endl;
		cout << "QueType at " << i << " " << queType[i] << endl;*/
		if (queType[i].size() > 4) {
			string subString;
			stringstream queString(queType[i]);
			while (getline(queString, subString,'.')) {
				multipleTag.push_back(subString);
			}
			for (int j = 0; j < attributeNum.size() - 2; j++) {
				if (multipleTag[1] == attributeNum[j].front() && queType[i + 1] == attributeNum[j].at(1)) {
					cout << attributeNum[j].at(2) << endl;
					notFound = false;
				}
			}
		}
		else {
			for (int j = 0; j < attributeNum.size() - 2; j++) {

				if (queType[i] == attributeNum[j].front() && queType[i + 1] == attributeNum[j].at(1)) {
					cout << attributeNum[j].at(2) << endl;
					notFound = false;
				}
			}
		}
		if (notFound) {
			cout << "Not found!" << endl;
		}
		notFound = true;
	}
	return 0;
}