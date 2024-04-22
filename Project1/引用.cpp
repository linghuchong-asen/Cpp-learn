#include "main.h"

void swapFun1(int* a, int* b);
void swapFun2(int& a, int& b);
int& testFun1();
int & testFun2();

void quoteFun() {
	int a = 10;
	int& b = a; // ���ñ����ʼ��

	int c = 20;
	int& d = c;
	

	cout << "b: " << b << endl;
	cout << "a: " << a << endl;

	// ���ú�ָ��һ����ָ������ڴ��ַ���ı����õ�ֵ�������ñ�����ֵҲ��ı�
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
	//cout << "ref��ֵ��" << ref << endl;
	//cout <<"ref��ֵ��"<<  ref << endl;

	int& ref2 = testFun2();
	cout << "ref2��ֵ��" << ref2 << endl;
	cout <<"ref2��ֵ��"<<  ref2 << endl;

	// ��������ֵ�����뷵����������
	testFun2() = 40;
	cout << "ref2��ֵ��" << ref2 << endl;

}

// ��ַ����
void swapFun1(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// ���ô���
void swapFun2(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// ���ܷ��ؾֲ�����������
 int & testFun1() {
	int a = 10;
	return a;
}


 // ���ؾ�̬����
 int& testFun2() {
	static int a = 10;
	 return a;
 }