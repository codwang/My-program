#include"test.h"
int main()
{
	int i = 0;
	for (; i < 100000; i++)
	{
		if (1 == Narcissus(i))
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}