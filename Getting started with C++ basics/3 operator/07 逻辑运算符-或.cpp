#include <iostream>
using namespace std;


int main()
{
	//�߼������ --- ��  ||
	int a = 10;
	int b = 10;
	//��C++�� ����0 ��Ϊ��
	cout << (a || b) << endl;
	a = 10;
	b = 0;
	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;

	//ͬ��Ϊ�� ����Ϊ��

	system("pause");

	return 0;

}
