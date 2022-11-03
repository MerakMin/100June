#include <stdio.h>
#include <math.h>
int main(){
    int t;
    double x1, x2, y1, y2;
    int p_num;
    double xx, yy, r;
    int c1, c2, result;
    scanf("\n%d\n", &t);
    for(int i = 0; i < t; i++){
        result = 0;
        scanf("\n%lf %lf %lf %lf\n", &x1, &y1, &x2, &y2);
        scanf("\n%d\n", &p_num);
        for(int j = 0; j < p_num; j++){
            c1 = 0;
            c2 = 0;
            scanf("\n%lf %lf %lf\n", &xx, &yy, &r);
            if(pow(x1 - xx, 2) + pow(y1 - yy, 2) < pow(r, 2))
                c1 = 1;
            if(pow(x2 - xx, 2) + pow(y2 - yy, 2) < pow(r, 2))
                c2 = 1;
            result += pow((c1 - c2), 2);
        }
        printf("%d\n", result);
    }
    return 0;
}