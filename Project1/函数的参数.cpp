#include "main.h"

#include <iostream>


using namespace std;
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "�������ֵ��" << endl; // endl��һ�����ݷ������ڲ���һ�����з���ˢ���������
	cout << "a��ֵ: " << a << endl;
	cout <<"b��ֵ: "<< b << endl;
	cout<<endl;
}

const int a = 10;
const int b = 20;
void swapFun() {
	swap(a, b);
	cout << "�������ֵ��" << endl;
	cout << "a��ֵ: " << a << endl;
	cout << "b��ֵ: " << b << endl;
}