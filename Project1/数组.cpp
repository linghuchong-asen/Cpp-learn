#include "main.h"

void arrFun() {
	int arr[5] = { 0,1,2,3,4 };

	//arr和&arr一致都是数组的首地址，即一个元素的地址；这一点和js不一样，js打印arr就是这个数组本身了
	cout << "arr的值" << arr << endl;
	cout << "arr的地址" << &arr << endl;

	cout << "arr第一个元素的值" << arr[0] << endl;
	cout << "arr第一个元素的地址" << &arr[0] << endl;

}

// 冒泡排序
void bubbleSort(){

}