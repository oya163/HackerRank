///*
//	Implementation of Inteface
//	06/16/16
//	Oyashi
//*/
//
//#include <iostream>
//
//using namespace std;
//
///*
//	Polygon Interface
//	Implemented using pure virtual methods
//*/
//class Polygon {
//public:
//	virtual int getNumberOfSides() = 0;
//	virtual double getPerimeter() = 0;
//};
//
////Triangle class inheriting Polygon class
//class Triangle : public Polygon {
//private:
//	int numOfSides = 3;
//	int side1 = 0, side2 = 0, side3 = 0;
//
//public:
//	Triangle(int s1, int s2, int s3) {
//		this->side1 = s1;
//		this->side2 = s2;
//		this->side3 = s3;
//	}
//
//	int getNumberOfSides() {
//		return numOfSides;
//	}
//
//	double getPerimeter() {
//		return (side1 + side2 + side3);
//	}
//};
//
////Rectangle class inheriting Polygon class
//class Rectangle : public Polygon {
//private:
//	int numOfSides = 4;
//	int side1 = 0, side2 = 0;
//
//public:
//	Rectangle(int s1, int s2) {
//		this->side1 = s1;
//		this->side2 = s2;
//	}
//
//	int getNumberOfSides() {
//		return numOfSides;
//	}
//
//	double getPerimeter() {
//		return 2*(side1 + side2);
//	}
//};
//
////Implementing super-style method
////super is not actually, just to show
////you can remove super definition and its usage
////and the program will still run
//class Square : public Rectangle {
//private:
//	typedef Rectangle super;
//
//public:
//	Square(int side1) :Rectangle(side1, side1) {
//		super(side1, side1);
//	}
//
//};
//
//int main() {
//	Triangle tri(1, 2, 3);
//	Rectangle rect(2, 4);
//	Square square(2);
//
//	cout << "Displaying info of Triangle" << endl;
//	cout << tri.getNumberOfSides() << endl;
//	cout << tri.getPerimeter() << endl;
//
//	cout << "Displaying info of Rectangle" << endl;
//	cout << rect.getNumberOfSides() << endl;
//	cout << rect.getPerimeter() << endl;
//
//	cout << "Displaying info of Square" << endl;
//	cout << square.getNumberOfSides() << endl;
//	cout << square.getPerimeter() << endl;
//
//	return 0;
//}