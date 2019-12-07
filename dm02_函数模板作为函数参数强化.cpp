#if 0
#include <iostream>
using namespace std;

//需求：对字符数组，int数组进行排序
//函数模板本质：类型参数化

template<typename T1, typename T2>
int mySort(T1* array, T2 size)
{

	T1 tmp;
	T2 i, j;
	if (array == nullptr)
	{
		return -1;
	}
	for (i = 0; i < size; ++i)
	{
		for ( j = i + 1; j < size; ++j)
		{
			if (array[i] < array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
	return 0;
}

template<typename T1, typename T2>
int myPrint(T1* array, T2 size)
{
	T2 i = 0;
	for (; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
int main()
{
	int array[] = {11, 33, 44, 33, 22, 6, 7};
	int size = sizeof(array) / sizeof(*array);
	mySort<int, int>(array, size);

	printf("排序后: ");
	myPrint(array, size);
}
#endif
