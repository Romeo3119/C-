#if 0
#include <iostream>

using namespace std;

template <typename T>
void mySwap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	cout << "����ģ�庯��" << endl;
}

void mySwap(int a, char c)
{
	cout << "a:" << a << "c" << c << endl;
	cout << "������ͨ����"<<endl;;
}

int main()
{
	int a = 10;
	char c = 'z';

	mySwap(a, c);//������ͨ���������Խ�����ʽ����ת��
	mySwap(c, a);

	mySwap(a, a); //���ú���ģ�壨���ʣ����Ͳ������������ϸ�ذ�������ƥ�䣬��������Զ�����ת��
	system("pause");
	return 0;
}
#endif