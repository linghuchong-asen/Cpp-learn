#include "main.h"

// 定义一个结构体
struct Student {
	string name;
	int age;
	int score;
};

// 值传递
void paramFun1(Student stu);
// 地址传递
void paramFun2(Student * stu);
// const在结构体中的使用场景
void constFun(const Student* stu);



void structFun() {

	
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
	cout << p->name << endl;
	
	// 函数内不能再定义一个完成的函数
	/*void print1(Student stu);
	void print1(){
		cout << stu.name << endl;
	}*/

	/*for (int i = 0; i < 3; i++) {
		cout << stuArr[i].name << endl;
	}*/

	paramFun1(stu3);

	paramFun2(&stu3);
	
}

void paramFun1(Student stu) {
	cout << "结构体传参值传递: " << stu.name << endl;
};

void paramFun2(Student *stu) {
	cout << "结构体传参，地址传递： " << stu->age << endl; 
}

void constFun(const Student *stu) {
	 //const的作用是防止误操作
	//stu->age = 90; // 不能对结构体属性进行修改
}