#if 0
#include <iostream>
using namespace std;

//�����ĸ���һ��
//�����Ĳ������Ͳ�һ��
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

//�����Ͳ��������������Ա���
//���ͱ��
//template ����C++��������׼����ʼ���ͱ�̡�
template <typename T>
void mySwap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	cout << "template,����ģ�庯��" << endl;
}

//����ģ��ĵ���
//��ʾ���͵���
//�Զ������Ƶ�
int main()
{
	{
		int x = 10;
		int y = 20;

		//mySwap<int>(x, y); //����ģ�壬��ʾ���͵���

		mySwap(x, y); //�Զ������Ƶ���һ�������
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