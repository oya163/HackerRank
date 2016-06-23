///*
//	Virtual Function
//	06/10/16
//	Oyashi
//*/
//
//#include <iostream>
//#include <stdio.h>
//#include <string>
//
//using namespace std;
//
//class Animal {
//public:
//	virtual void says() = 0;
//};
//
//class Dog : public Animal {
//public:
//	void says() { printf ("Woof!"); }
//};
//
//class Cat : public Animal {
//public:
//	void says() { printf ("Meow!"); }
//};
//
//void func(Animal* anim) {
//	return anim->says();
//}
//
//int main() {
//	Dog* d = new Dog();
//	Cat *c = new Cat();
//	Animal* aD = d;
//	Animal* aC = c;
//
//
//	func(d);
//	func(c);
//
//	aD->says(); cout << endl;
//	aC->says(); cout << endl;
//
//	return 0;
//}
//
