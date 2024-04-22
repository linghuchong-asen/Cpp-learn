#include "main.h"

void swapFun1(int* a, int* b);
void swapFun2(int& a, int& b);
int& testFun1();
int & testFun2();

void quoteFun() {
	int a = 10;
	int& b = a; // 引用必须初始化

	int c = 20;
	int& d = c;
	

	cout << "b: " << b << endl;
	cout << "a: " << a << endl;

	// 引用和指针一样，指向的是内存地址，改变引用的值，被引用变量的值也会改变
	b = 30;
	cout << "b: " << b << endl;
	cout << "a: " << a << endl;

	//swapFun1(&a, &c);
	//cout << "c: " << c << endl;
	//cout << "a: " << a << endl;

	swapFun2(b, d);
	cout << "c: " << c << endl;
	cout << "a: " << a << endl;

	//int& ref = testFun1();
	//cout << "ref的值：" << ref << endl;
	//cout <<"ref的值："<<  ref << endl;

	int& ref2 = testFun2();
	cout << "ref2的值：" << ref2 << endl;
	cout <<"ref2的值："<<  ref2 << endl;

	// 函数做左值，必须返回引用类型
	testFun2() = 40;
	cout << "ref2的值：" << ref2 << endl;

}

// 地址传递
void swapFun1(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 引用传递
void swapFun2(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// 不能返回局部变量的引用
 int & testFun1() {
	int a = 10;
	return a;
}


 // 返回静态变量
 int& testFun2() {
	static int a = 10;
	 return a;
 }