#include<stdio.h>

#define MAXLINE 1000
int main(void)
{
	char s[MAXLINE];

	for(int i = 0; i < MAXLINE-1; i++)
	{
		scanf("%c", &s[i]);
	}
    return 0;
}

//strlen函数
int strlen(char s[])
{
	int i = 0;
	while(s[i] != '\0')
	{
		i++;
	}

	return i;
}