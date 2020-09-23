#include"test.h"
int Count(int n) 
{
	int count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}

	return count;
}
int Narcissus(int n)
{
	int database = n;
	int count = Count(n);
	int sum = 0;
	int k = 0;
	while (n)
	{
		k=n%10;
		sum+=pow(k, count);
		n /= 10;
	}
	if (database == sum)
	{
		return 1;
	}
	return 0;
}

	