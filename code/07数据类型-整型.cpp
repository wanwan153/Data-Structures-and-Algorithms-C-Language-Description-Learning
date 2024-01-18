#include<iostream>
using namespace std;

//数据类型：c++规定在创建一个变量或常量时，
//必须要指定出相应的数据类型，否则无法给变量分配内存

//整型的作用:整型变量表示的是整数类型的数据
//整数类型有4种，区别在于所占内存空间不同

//short(短整型) 占用空间:2字节
//int(整型) 占用空间:4字节
//long(长整型) 占用空间：Windows为4字节
//                       Linux为4字节(32位),8字节(64位)
//long long(长长整型) 占用空间:8字节

int main() {

	//short 取值(-2^15~2^15-1)
	short number1 = 10;

	//超出上限,不会报错,但数据溢出导致循环
	short number2 = 32768;
	
	//int 取值(-2^31~2^31-1)
	int number3 = 20;

	//long 取值(-2^31~2^31-1)
	long number4 = 30;

	//long long 取值(-2^63~2^63-1)
	long long number5 = 40;

	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;
	cout << "number3 = " << number3 << endl;
	cout << "number4 = " << number4 << endl;
	cout << "number5 = " << number5 << endl;

	system("pause");

	return 0;
}