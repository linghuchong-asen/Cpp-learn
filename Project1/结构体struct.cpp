#include "main.h"



void structFun() {

	// ����һ���ṹ��
	struct Student {
		string name;
		int age;
		int score;
	};
	// �ṹ�����������ʽ1��
	struct Student stu1;
	stu1.name = "����";
	stu1.age = 10;
	stu1.score = 90;

	// �ṹ�����������ʽ2
	Student stu2 = { "lisi",12,80 };

	// �ṹ������
	Student stuArr[3] = {
		{"a",2,4},
		{"b",3,5},
		{"c",6,7}
	};

	// �ṹ��ָ��
	Student stu3 = { "d",4,5 };
	Student * p = &stu3;
	// ͨ���ṹ���޸Ľṹ������
	p->name = "e";
	// ͨ��ָ����ʽṹ������
	//cout << p->name << endl;
	
	// �����ڲ����ٶ���һ����ɵĺ���
	/*void print1(Student stu);
	void print1(){
		cout << stu.name << endl;
	}*/

	/*for (int i = 0; i < 3; i++) {
		cout << stuArr[i].name << endl;
	}*/
	
}