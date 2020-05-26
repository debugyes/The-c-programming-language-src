#include<stdio.h>

int power(int base, int n);
int power2(int base, int n);

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%6d %6d %6d\n", i, power(2, i), power(-3, i));
	}

	printf("-------------------------------------------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%6d %6d %6d\n", i, power2(2, i), power2(-3, i));
	}
	return 0;
}

//版本1
int power(int base, int n)
{
	int result = 1;

	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n; i++)
			{
				result *= base;
			}
	}
	
	return result;
}


//版本2
int power2(int base, int n)
{
	int result;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (result = 1; n > 0; --n)
		{
			result *= base;
		}
	}

	return result;
}
