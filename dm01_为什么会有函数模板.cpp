#if 0
#include <iostream>
using namespace std;

//函数的更能一样
//函数的参数类型不一样
void mySwap01(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}

void mySwap02(char &a, char &b)
{
	char c = 0;
	c = a;
	a = b;
	b = c;
}

//让类型参数化，方便程序员编程
//泛型编程
//template 告诉C++编译器，准备开始泛型编程。
template <typename T>
void mySwap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	cout << "template,我是模板函数" << endl;
}

//函数模板的调用
//显示类型调用
//自动类型推导
int main()
{
	{
		int x = 10;
		int y = 20;

		//mySwap<int>(x, y); //函数模板，显示类型调用

		mySwap(x, y); //自动类型推导，一般很少用
		printf("x:%d, y:%d\n", x, y);
	}
}
int main01()
{
	int x = 10;
	int y = 20;
	mySwap01(x, y);
	printf("x:%d, y:%d\n", x, y);

	char a = 'a';
	char b = 'b';
	mySwap02(a, b);
	printf("a:%c, b:%c\n", a, b);
	cout << "hello\n";
	system("pause");
	return 0;
}
#endif