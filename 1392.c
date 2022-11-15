#include<stdio.h>
#pragma warning(disable:4996)
int arr_n[101];
int arr_q[1001];
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr_n[i]);
    for (int j = 0; j < q; j++)
        scanf("%d", &arr_q[j]);
    for (int j = 0; j < q; j++)
    {
        int sum = -1;
        int temp = arr_q[j];
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr_n[i];
            if (sum >= temp)
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }
}
