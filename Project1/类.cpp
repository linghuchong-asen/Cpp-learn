#include "main.h"


class Circle {
public:
	// ���캯��
	Circle(int r) {
		m_r = r;
		color = "red";
	}

	int m_r;

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