#include<stdio.h>
#include<math.h>
int main(){
    int t, x1, y1, r1, x2, y2, r2, result;
    int i;
    scanf("%d", &t);
    for(i=0; i < t; i++){
        scanf("%d %d %d", &x1, &y1, &r1);
        scanf("%d %d %d", &x2, &y2, &r2);
        double r = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        int s = r1 > r2 ? r1 - r2 : r2 - r1;
         if (r == 0 && r1 == r2){
            result = -1;
        }
        else if (r < r1 + r2 && s < r){
            result = 2;
        }
        else if (r == r1 + r2 || s == r){
            result = 1;
        }
        else {
            result = 0;
        }
        printf("%d\n", result);
    }
    return 0;
}