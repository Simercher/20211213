#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <Windows.h>

// char outbuf[1000];
int main(void)
{
    int n = 0, m = 0;
    int arr[999][999];
    int flag = 0;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 1; i < n - 1; i++)
    {
        for(int j = 1; j < m - 1; j++)
        {
            if(arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1])
            {
                flag = 1;
                printf("%d %d %d\n", arr[i][j], i + 1, j + 1);
            }
        }
    }
    
    if(flag == 0)
    {
        printf("none %d %d\n", n, m);
    }

    return 0;
}