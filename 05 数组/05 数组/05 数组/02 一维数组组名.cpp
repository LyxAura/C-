#include<iostream>
using namespace std;

int main2() 
{
	//一维数组数组名
	
	//一维数组名称的**用途**：
	//1. 可以统计整个数组在内存中的长度
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组所占内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素所占内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. 可以获取数组在内存中的首地址
	cout << "数组的首地址为：" << int(arr) << endl;
	cout << "数组中第一个元素的地址：" << int(&arr[0]) << endl;
	cout << "数组中第二个元素的地址：" << int(&arr[1]) << endl;
	
	//数组名是常量，不可以赋值




	system("pause");

	return 0;
}