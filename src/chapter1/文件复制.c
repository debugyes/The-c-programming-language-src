#include<stdio.h>
int main(void)
{
	int c;

	/*
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	*/

	//使用while循环改进
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}


	return 0;
}