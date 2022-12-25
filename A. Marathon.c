#include <stdio.h>
int main()
{
    int t, i, a, b, c, d;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a > b && a > c && a > d){
            printf("0\n");
        }
        else if(a < b && a < c && a < d){
            printf("3\n");
        }
        else if((a < b || a < c || a < d) && (a > b || a > c) && (a > b || a > d) && (a > c || a > d)){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }

    return 0;
}

