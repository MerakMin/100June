#include <stdio.h>
int main(){
    int T,N,f[41][2];
    scanf("%d",&T);
    f[0][0]=1; f[0][1]=0;
    f[1][0]=0; f[1][1]=1;
    for(int i=2;i<=40;i++){
        f[i][0]=f[i-1][0]+f[i-2][0];
        f[i][1]=f[i-1][1]+f[i-2][1];
    }
    while(T--){
        scanf("%d",&N);
        printf("%d %d\n",f[N][0],f[N][1]);
    }
    return 0;
}