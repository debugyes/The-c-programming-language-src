/*
	��fahr = 0��20��30...ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ�
*/

/*
#include<stdio.h>
int main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		//printf("%d\t%d\n", fahr, celsius);
		printf("%3d %6d\n", fahr, celsius);//��������Ҷ���

		fahr = fahr + step;
	}

	return 0;
}*/

//����İ汾���Ͻ���ʹ�õ�int���ͱ�����������иĽ�

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/ 9.0) * (fahr - 32) ;//5.0��9.0ʱ������������������������λ
		printf("%3.0f %6.1f\n", fahr, celsius);//��������Ҷ���

		fahr = fahr + step;
	}

	return 0;
}