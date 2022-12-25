#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, count = 0;
    char str[60];
    scanf("%d", &n);
    scanf("%s", str);
    for(i = 0; i < n; i++){
        if(str[i] == str[i+1]){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}


