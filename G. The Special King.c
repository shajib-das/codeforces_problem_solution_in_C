#include <stdio.h>
#include <math.h>
int main()
{
    int t, i, x1, x2, y1, y2, moveX, moveY, sum;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        moveX = abs(x1 - x2);
        moveY = abs(y1 - y2);

        sum = moveX + moveY;

        printf("%d\n", sum);
    }
    return 0;
}

