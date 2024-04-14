#include "main.h";
#include<iostream>;
using namespace std;

extern int hello(); // 表明这个这个函数式外部引用的
extern int variable();


int main() {

	//hello();
	//variable();
	swapFun();

	hello();
	variable();

	return 0;
	
}

