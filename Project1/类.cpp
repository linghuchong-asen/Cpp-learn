#include "main.h"


class Circle {
public:
	// ���캯��
	Circle(int r) {
		m_r = r;
		color = "red";
		diameter = new int(10);
	};

	// �������캯��
	Circle(const Circle& p) {
		m_r = 10;
		diameter = new int(p.m_r);
	}

	int m_r;
	int *diameter;

	~Circle() {
		if (diameter != NULL) {
			delete diameter;
		}
	}

	double caculatePerimeter() {
		return 2 * PI * m_r;
	}
private:
	double PI = 3.14;

	// static  string color = "red"; // ���Բ����ڶ���ʱ��ֵ��Ӧ���ں����и�ֵ
	static  string color;
};

void classFun() {
	Circle c(2);
	double a = c.caculatePerimeter();
	cout << "Բ���ܳ��� " << a << endl;
}