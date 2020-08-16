#include <iostream>
using namespace std;


int main()
{
	//逻辑运算符 --- 或  ||
	int a = 10;
	int b = 10;
	//在C++中 除了0 都为真
	cout << (a || b) << endl;
	a = 10;
	b = 0;
	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;

	//同假为假 其余为真

	system("pause");

	return 0;

}
