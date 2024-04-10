#include<iostream>
#include"variable.hpp"
using namespace std;

int variable() {
	/* 变量
	* 作用：给一段指定的内存空间起名，方便操作这段内存
	* 语法：变量类型 变量名=初始值
	*/

	int a = 10;
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}