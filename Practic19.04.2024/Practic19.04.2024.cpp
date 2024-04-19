#include <iostream>

////#define INTEGER
//#define DOUBLE
//
//#include "function.h"
//
//int main() {
//	int arrInt[3];
//	double arrDouble[3];
//	show(arrDouble);
//	sort(arrDouble);
//}
using namespace std;

#include "String.h"

class TestClass {
	int x;
	int y;
public:
	TestClass() : TestClass(0, 0) {}
	// конструктор делигирования
	TestClass(int x) : TestClass(x, 0) {}
	// унифицированная инициализация
	TestClass(int x, int y) : x{ x }, y{ y } {}

	int sum() {
		return x + y;
	}

	~TestClass() {
		cout << "Destructor" << endl;
	}
};



int main()
{
	//TestClass test;
	//cout << test.sum() << endl;

	//TestClass test2(6);
	//cout << test2.sum() << endl;
	//
	//TestClass test3(6, 6);
	//cout << test3.sum() << endl;

	//TestClass* ptr_test = new TestClass;
	///*TestClass* ptr_test2 = new TestClass(5,7);*/
	//
	//cout << ptr_test->sum() << endl;

	//delete ptr_test;
	//ptr_test = new TestClass(5, 7);
	//cout << ptr_test->sum() << endl;

	String* str = new String;
	str->initString();
	str->printString();
	delete str;
	str = new String("hello world");
	str->printString();
	str->initString();
	str->printString();

}
