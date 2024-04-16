#include "main.h"

void pointerFun() {
	int a = 10;
	// 定义指针p，星号表示要定义一个指针；一个指针真用4个四节(32位操作系统，不区分数据类型)，8个字节（64位操作系统）
	int * p;
	
	// 指针p赋值，此时指向变量a的内存地址
	// &符号是取址符号
	p =  &a;

	// 还可以直接进行赋值
	//int* p = &a;


	cout << "变量a的内存地址" << &a << endl;
	cout << "变量a的内存地址" << sizeof(p) << endl;

	// 指针变量可以通过" * "操作符，操作指针变量指向的内存空间，这个过程称为解引用
	cout << "变量a的内存地址" << *p << endl;


	// 空指针:指针变量指向内存中编号为0的空间
	int* p1 = NULL;
	int* p2 = NULL;

	// 野指针:指针变量指向非法的内存空间
	int* p3 = (int*)0x1100; 
	//cout<< "p3的值：" << *p3 << endl; // 0x1100这个地址还没有被申请使用，直接访问值就会出错

}