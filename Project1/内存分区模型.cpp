#include"main.h"

// ȫ�ֱ���-ȫ����
int g_a = 10;
// ȫ�ֳ���-ȫ����
const int g_b = 20;


void memoryFun(int p_f) {
	// ��̬����-ȫ����
	static int l_c = 30;
	// �ַ���-ȫ����
	cout << & "abc" << endl;
	cout << (int) &l_c << endl;
	cout << (int) &g_b << endl;
	cout << (int) &g_a << endl;

	// �ֲ�����-ջ��
	int l_d = 10;
	cout << (int)&l_d << endl;
	// �ֲ�����-ջ��
	const int l_e = 10;
	cout << (int)&l_e << endl;
	// ��������-ջ��
	cout << (int)&p_f << endl;

	// new�ؼ����ڶ��������ڴ�
	int *l_m = new int(10);
	cout << "new���ٶ��ڴ�" << (int)l_m << endl; // l_m��ָ�룬��������ڴ��ַ��
	cout << "new���ٶ��ڴ�" << (int)&l_m << endl; // ������ָ�뱾��ռ�õ��ڴ��ַ����ջ��

	// ����deleteɾ�������ڴ棬��Ҫ�����ֶ��ͷ�
	delete l_m;
}

// ջ


// ��

