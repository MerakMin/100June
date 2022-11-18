#include <stdio.h>
int main()
{
    char Arr[20];
    gets(Arr);
    
    for(int i = 0;Arr[i] != '\0'; i++){
        printf("%c",Arr[i]+2);
    }
    printf("\n");
    for(int i = 0; Arr[i] != '\0'; i++){
        printf("%c",(Arr[i]*7)%80 + 48);
    }
    return 0;
}