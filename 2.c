#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[1001];
    int times, c, n;
    while (gets(str) != 0)
    {

        int a[257] = {0};
        n = strlen(str);
        for (times = 0; times < n; times++) /*判斷並存入int陣列中*/
        {
            a[str[times]] = a[str[times]] + 1; /*個數的累加*/
        }
        for (times = 1; times < n; times++) /*從各數小*/
        {
            for (c = 127; c >= 0; c--) /*ASCII大的*/
            {
                if (a[c] == times)
                    printf("%d %d\n", c, times);
            }
        }
        printf("\n");
    }
    return 0;
}