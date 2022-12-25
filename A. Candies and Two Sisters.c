#include <stdio.h>
int main()
{
    long long n, a, b, p;
    int t, i;
    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);

        if(n < 3)
        {
            b = 0;
        }
        p = n / 2;
        a = p + 1;
        b = n - (p + 1);

        printf("%d\n", b);

    }

    return 0;
}
