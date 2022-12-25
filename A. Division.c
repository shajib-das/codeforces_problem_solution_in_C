#include <stdio.h>

int main()
{
    int t, i, n, x;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);

        if(n >= 1900){
            x = 1;
            printf("Division %d\n", x);
        }
        else if(n >= 1600 && n <= 1899){
            x = 2;
            printf("Division %d\n", x);
        }
        else if(n >= 1400 && n <= 1599){
            x = 3;
            printf("Division %d\n", x);
        }
        else if(n <= 1399){
            x = 4;
            printf("Division %d\n", x);
        }
    }


    return 0;
}

