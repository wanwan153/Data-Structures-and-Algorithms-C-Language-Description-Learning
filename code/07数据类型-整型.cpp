#include<iostream>
using namespace std;

//�������ͣ�c++�涨�ڴ���һ����������ʱ��
//����Ҫָ������Ӧ���������ͣ������޷������������ڴ�

//���͵�����:���ͱ�����ʾ�����������͵�����
//����������4�֣�����������ռ�ڴ�ռ䲻ͬ

//short(������) ռ�ÿռ�:2�ֽ�
//int(����) ռ�ÿռ�:4�ֽ�
//long(������) ռ�ÿռ䣺WindowsΪ4�ֽ�
//                       LinuxΪ4�ֽ�(32λ),8�ֽ�(64λ)
//long long(��������) ռ�ÿռ�:8�ֽ�

int main() {

	//short ȡֵ(-2^15~2^15-1)
	short number1 = 10;

	//��������,���ᱨ��,�������������ѭ��
	short number2 = 32768;
	
	//int ȡֵ(-2^31~2^31-1)
	int number3 = 20;

	//long ȡֵ(-2^31~2^31-1)
	long number4 = 30;

	//long long ȡֵ(-2^63~2^63-1)
	long long number5 = 40;

	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;
	cout << "number3 = " << number3 << endl;
	cout << "number4 = " << number4 << endl;
	cout << "number5 = " << number5 << endl;

	system("pause");

	return 0;
}