/*
	Polymorphism
	06/11/16
	Oyashi
*/

#include <iostream>

using namespace std;

class Shape {
protected:
	int width, height;

public:
	Shape(int a, int b) {
		width = a;
		height = b;
	}

	//pure virtual function
	virtual int get_area() = 0;
};

//derived class
class Rectangle : public Shape {
public:
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
	int get_area() {
		return (width * height);
	}
};

//derived class
class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) {}
	int get_area() {
		return (width * height / 2);
	}};

int main() {
	Rectangle rect(4, 5);
	Triangle tri(4, 5);
	Shape *shape1 = &rect;
	Shape *shape2 = &tri;
	cout << shape1->get_area() << endl;
	cout << shape2->get_area() << endl;


	return 0;
}