#include <iostream>
using namespace std;


int main()
{
	//整型：short(2)   int(4)       long(4)         long long(8)
	//可以利用sizeof求出数据类型占用内存大小
	//语法： sizeof( 数据类型 /变量)
	
	//1、短整型
	short num1 = 10;
	cout << "short占用内存空间为：  " << sizeof(short) << endl;
	cout << "short占用内存空间为：  " << sizeof(num1) << endl;

	//2、整型
	int num2 = 32769;
	cout << "int占用内存空间为：  " << sizeof(int) << endl;
	cout << "int占用内存空间为：  " << sizeof(num2) << endl;
	//3、长整型
	long num3 = 10;
	cout << "long占用内存空间为：  " << sizeof(long) << endl;
	cout << "long占用内存空间为：  " << sizeof(num3) << endl;
	//4、长长整型
	long long num4 = 10;
	cout << "long long占用内存空间为：  " << sizeof(long long) << endl;
	cout << "long long占用内存空间为：  " << sizeof(num4) << endl;

	//整型大小比较
	//short < int <= long < long long
	//用到后面的if语句，可以暂时不看
	if (sizeof(long long) > sizeof(long))
		cout << "long long 占用内存空间大于 long " << endl;
	else cout <<  "long long 占用内存空间小于 long " << endl;
	
	system("pause");

	return 0;

}
