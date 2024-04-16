#include "main.h"



void structFun() {

	// 定义一个结构体
	struct Student {
		string name;
		int age;
		int score;
	};
	// 结构体变量创建方式1；
	struct Student stu1;
	stu1.name = "张三";
	stu1.age = 10;
	stu1.score = 90;

	// 结构体变量创建方式2
	Student stu2 = { "lisi",12,80 };

	// 结构体数组
	Student stuArr[3] = {
		{"a",2,4},
		{"b",3,5},
		{"c",6,7}
	};

	// 结构体指针
	Student stu3 = { "d",4,5 };
	Student * p = &stu3;
	// 通过结构体修改结构体属性
	p->name = "e";
	// 通过指针访问结构体属性
	//cout << p->name << endl;
	
	// 函数内不能再定义一个完成的函数
	/*void print1(Student stu);
	void print1(){
		cout << stu.name << endl;
	}*/

	/*for (int i = 0; i < 3; i++) {
		cout << stuArr[i].name << endl;
	}*/
	
}