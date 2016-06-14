/*
	Usage of inheritance, virtual functions, static functions, static members
	and multidimensional dynamic object creation
	06/14/16
	Oyashi

	Sample Input:
	4
	1
	Walter 56 99
	2
	Jesse 18 50 48 97 76 34 98
	2
	Pinkman 22 10 12 0 18 45 50
	1
	White 58 87

	Sample Output:
	Walter 56 99 1
	Jesse 18 403 1
	Pinkman 22 135 2
	White 58 87 2
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person {
public:
	string name;
	int age;
	virtual void getdata()
	{
		cin >> name;
		cin >> age;
	};
	virtual void putdata() {
		cout << name;
		cout << age;
	};

};

class Professor : public Person {
private:
	int publications;
	const int current_id = 0;
	static int ID() {
		static int id = 1;
		return id++;
	}
	int myID = 0;


public:
	Professor() :myID(ID()) {
		name = " ";
		age = 0;
		publications = 0;
		//id++;
	}

	void getdata() {
		cout << "Enter the name: ";
		cin >> name;
		cout << "Enter the age: ";
		cin >> age;
		cout << "Enter the number of publications: ";
		cin >> publications;
	}

	void putdata() {
		cout << name << " " << age << " " << publications << " " << myID << endl;
	}
};

class Student : public Person {
private:
	int marks[6] = {};

	const int next_id = 0;

	static int ID1() {
		static int id_ = 1;
		return id_++;
	}
	int studentID;

public:

	Student() :studentID(ID1()) {
		name = " ";
		age = 0;
		for (int i = 0; i < 6; i++) {
			marks[i] = 0;
		}
	}

	void getdata() {
		cout << "Enter the name : ";
		cin >> name;
		cout << "Enter the age: ";
		cin >> age;
		cout << "Enter the marks for 6 subjects ";
		for (int i = 0; i < 6; i++) {
			cin >> marks[i];
		}
	}

	void putdata() {
		int sum = 0;
		for (int i = 0; i < 6; i++) {
			sum += marks[i];
		}
		cout << name << " " << age << " " << sum << " " << studentID << endl;
	}

};

int main() {

	int n = 1, val;
	cout << "Please enter the number of objects to be created ";
	cin >> n; //The number of objects that is going to be created.
	cout << "No matter how much u entered, it doesn't matter " << endl;
	cout << "because the dynamic memory allocation for base class is not working " << endl;
	cout << "3 objects will be created for now, which is hardcoded " << endl;

	Person** per = new Person*[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter the value (1 = Professor, 2 = Student) :";
		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else {
			per[i] = new Student; // Else the current object is of type Student

		}
			

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i<n; i++)
		per[i]->putdata(); // Print the required output for each object.

	delete[] per;

	return 0;

}


