#include<iostream>
#include "helloWorld.h" // 包含函数声明的头文件
using namespace std;

int hello() {
	// 输出内容
	cout << "hello world" << endl;
	// 下面两行是每个程序中都有的两行
	system("pause");
	// 表示程序运行成功
	return 0;
}