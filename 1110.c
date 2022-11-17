#include <stdio.h>
int main()
{
	int n, c = 0, i, r = 0, o=0;
	int arr[3] = {};
	scanf("%d", &n);
	if (n < 10)
	{
		a[0] = 0;
		a[1] = n;
	}
	else if (n >= 10 && n < 100)
	{
		a[0] = n / 10;
		a[1] = n % 10;
	}
	while (1)
	{
		r = a[0] + a[1];
		o = a[1]*10;
		if (r < 10)
		{
			a[0] = 0;
			a[1] = r;
		}
		else if (r >= 10 && r < 100)
		{
			a[0] = r / 10;
			a[1] = r % 10;
		}
		r = o + a[1];
		c++;
		if (r == n)
		{
			printf("%d", c);
			break;
		}
		if (r < 10)
		{
			a[0] = 0;
			a[1] = r;
		}
		else if (r >= 10 && r < 100)
		{
			a[0] = r / 10;
			a[1] = r % 10;
		}
	}
	return 0;
}