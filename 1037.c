#include <stdio.h>
int main()
{
    int a = 0;
    long long max = 0, min = 1000001;
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){ 
        scanf("%d", &a);
        if(a > max)
            max = a;
        if(a < min)
            min = a;
    }
    printf("%lld\n", max * min);
    return 0;
}