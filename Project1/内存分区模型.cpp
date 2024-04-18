#include"main.h"

// 全局变量-全局区
int g_a = 10;
// 全局常量-全局区
const int g_b = 20;

// 全局区
void memoryFun() {
	// 静态变量-全局区
	static int l_c = 30;
	// 字符串-全局区
	cout << (int) &"abc" << endl;
	cout << (int) &l_c << endl;
	cout << (int) &g_b << endl;
	cout << (int) &g_a << endl;
}

