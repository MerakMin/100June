#include<stdio.h>
int main()
{
	char arr[50][50] = { 0,};
	int r;
	int c;
	scanf("%d %d", &r, &c);
	for (int i = 0; i < r; i++)
	{
		scanf("%s", arr[i]);
	}
	int R = r;
	int C = c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == 'X')
			{
				R--;
				break;
			}
		}
	}
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if (arr[j][i] == 'X')
			{
				C--;
				break;
			}
		}
	}
	if (r == 1)
	{
		printf("%d\n", C);
	}
	else if (c == 1)
	{
		printf("%d\n", R);
	}
	else
	{
		printf("%d\n", R < C ? C : R);
	}
	return 0;
}