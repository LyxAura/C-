#include<iostream>
using namespace std;

int main1() 
{
	//整型：
	//1.短整型(-32768~36767)
	short num1 = 36768;//(不能正常显示)
	//2.整型
	int num2 = 36768;
	//3.长整型
	long num3 = 10;
	//4.长长整型
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	system("pause");

	return 0;
}