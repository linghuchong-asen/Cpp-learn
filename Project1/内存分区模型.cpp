#include"main.h"

// ȫ�ֱ���-ȫ����
int g_a = 10;
// ȫ�ֳ���-ȫ����
const int g_b = 20;

// ȫ����
void memoryFun() {
	// ��̬����-ȫ����
	static int l_c = 30;
	// �ַ���-ȫ����
	cout << (int) &"abc" << endl;
	cout << (int) &l_c << endl;
	cout << (int) &g_b << endl;
	cout << (int) &g_a << endl;
}

