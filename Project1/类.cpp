#include "main.h"


class Circle {
public:
	// 构造函数
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

	// static  string color = "red"; // 属性不能在定义时赋值，应该在函数中赋值
	static  string color;
};

void classFun() {
	Circle c(2);
	double a = c.caculatePerimeter();
	cout << "圆的周长： " << a << endl;

}