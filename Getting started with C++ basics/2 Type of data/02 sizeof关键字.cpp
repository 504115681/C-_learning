#include <iostream>
using namespace std;


int main()
{
	//���ͣ�short(2)   int(4)       long(4)         long long(8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨�� sizeof( �������� /����)
	
	//1��������
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��  " << sizeof(short) << endl;
	cout << "shortռ���ڴ�ռ�Ϊ��  " << sizeof(num1) << endl;

	//2������
	int num2 = 32769;
	cout << "intռ���ڴ�ռ�Ϊ��  " << sizeof(int) << endl;
	cout << "intռ���ڴ�ռ�Ϊ��  " << sizeof(num2) << endl;
	//3��������
	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��  " << sizeof(long) << endl;
	cout << "longռ���ڴ�ռ�Ϊ��  " << sizeof(num3) << endl;
	//4����������
	long long num4 = 10;
	cout << "long longռ���ڴ�ռ�Ϊ��  " << sizeof(long long) << endl;
	cout << "long longռ���ڴ�ռ�Ϊ��  " << sizeof(num4) << endl;

	//���ʹ�С�Ƚ�
	//short < int <= long < long long
	//�õ������if��䣬������ʱ����
	if (sizeof(long long) > sizeof(long))
		cout << "long long ռ���ڴ�ռ���� long " << endl;
	else cout <<  "long long ռ���ڴ�ռ�С�� long " << endl;
	
	system("pause");

	return 0;

}
