#include "main.h"


class Circle {
public:
	// 构造函数
	Circle(int r) {
		m_r = r;
		color = "red";
		diameter = new int(10);
	};

	// 拷贝构造函数
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

	// static  string color = "red"; // 属性不能在定义时赋值，应该在函数中赋值
	static  string color;
};

void classFun() {
	Circle c(2);
	double a = c.caculatePerimeter();
	cout << "圆的周长： " << a << endl;
}