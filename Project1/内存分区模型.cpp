#include"main.h"

// 全局变量-全局区
int g_a = 10;
// 全局常量-全局区
const int g_b = 20;


void memoryFun(int p_f) {
	// 静态变量-全局区
	static int l_c = 30;
	// 字符串-全局区
	cout << & "abc" << endl;
	cout << (int) &l_c << endl;
	cout << (int) &g_b << endl;
	cout << (int) &g_a << endl;

	// 局部变量-栈区
	int l_d = 10;
	cout << (int)&l_d << endl;
	// 局部常量-栈区
	const int l_e = 10;
	cout << (int)&l_e << endl;
	// 函数参数-栈区
	cout << (int)&p_f << endl;

	// new关键字在堆区开辟内存
	int *l_m = new int(10);
	cout << "new开辟堆内存" << (int)l_m << endl; // l_m是指针，本身就是内存地址了
	cout << "new开辟堆内存" << (int)&l_m << endl; // 这里是指针本身占用的内存地址，在栈区

	// 利用delete删除堆区内存，需要程序手动释放
	delete l_m;
}

// 栈


// 堆

