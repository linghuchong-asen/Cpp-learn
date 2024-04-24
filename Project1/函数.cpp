#include "main.h"

int test1(int a, int b=10,int c=20) {
	return a + b + c;
}
// 函数重载，发生在同一作用域下，参数数量不一样，或者类型不一样
string test1(string a, string b ,string c) {
	return a + b + c;
}
void functionTest() {
   int test1Ret = test1(1);
   cout << test1Ret << endl;
   string test1Ret2 = test1("a", "b", "c");
   cout << test1Ret2 << endl;
}