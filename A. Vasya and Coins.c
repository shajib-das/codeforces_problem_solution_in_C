#include <stdio.h>

int main()
{
    int t, i, a, b, s;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        s = a + (b * 2) + 1;
        if(a == 0){
            s = 1;
        }
        printf("%d\n", s);
    }


    return 0;
}


