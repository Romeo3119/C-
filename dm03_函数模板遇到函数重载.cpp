#if 0
#include <iostream>

using namespace std;

template <typename T>
void mySwap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	cout << "我是模板函数" << endl;
}

void mySwap(int a, char c)
{
	cout << "a:" << a << "c" << c << endl;
	cout << "我是普通函数"<<endl;;
}

int main()
{
	int a = 10;
	char c = 'z';

	mySwap(a, c);//调用普通函数：可以进行隐式类型转换
	mySwap(c, a);

	mySwap(a, a); //调用函数模板（本质：类型参数化），将严格地按照类型匹配，不会进行自动类型转换
	system("pause");
	return 0;
}
#endif