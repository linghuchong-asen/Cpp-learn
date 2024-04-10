#include "main.h"

#include <iostream>


using namespace std;
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后的值：" << endl; // endl是一个操纵符，用于插入一个换行符并刷新输出流。
	cout << "a的值: " << a << endl;
	cout <<"b的值: "<< b << endl;
	cout<<endl;
}

const int a = 10;
const int b = 20;
void swapFun() {
	swap(a, b);
	cout << "函数外的值：" << endl;
	cout << "a的值: " << a << endl;
	cout << "b的值: " << b << endl;
}