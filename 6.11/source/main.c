#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number[10];
	int i, x,a,b,s;
	printf("��J�ݭn�ƦC����Ƽ�:");
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		printf("��%d����ƬO:", i);
		scanf("%d", &number[i]);
	}
	for (a = 1; a <= x; a++)
	{
		for (b = a; b <= x; b++)
		{
			if (number[b] < number[a])
			{
				s = number[b];
				number[b] = number[a];
				number[a] = s;
			}

		}
	}
	printf("�ƦC�ᬰ:\n ");
	for (a = 1; a <= x; a++)
		printf("%d  ",number[a]);

	system("pause");
	return 0;
}