#include <iostream>
using namespace std;


int main()
{
	//ʵ�ͣ������ͣ�
	//Ĭ������£����һ��С��������ʾ6λ��Ч����

	//1�������� float
	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << endl;

	//2��˫���� double
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ�Ϊ�� " << sizeof(float) << endl;

	cout << "doubleռ���ڴ�ռ�Ϊ�� " << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2;//3 * 10^2;
	cout << "f2= " << f2 << endl;

	float f3 = 3e-2;//3 * 0.1^2;
	cout << "f3= " << f3 << endl;

	system("pause");

	return 0;

}
