#include "main.h";
#include<iostream>;
using namespace std;

extern int hello(); // 表明这个这个函数式外部引用的
extern int variable();

int main() {
<<<<<<< HEAD
	//hello();
	//variable();
	swapFun();
=======
	hello();
	variable();
>>>>>>> b1045c35cb84c8bd8c14868adb19e5d47e71dd11
	return 0;
}