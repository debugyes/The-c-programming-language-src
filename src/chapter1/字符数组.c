#include<stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len = 0;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while(len = getline(line, MAXLINE) > 0)
	{
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0)
		printf("%s", longest);


	return 0;
}

int getLine(char line[], int maxline)
{
	char c;
	int i, c;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if(c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

//把char from赋值进char to
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from [i]) != '\0')
	{
		i++;
	}
}
