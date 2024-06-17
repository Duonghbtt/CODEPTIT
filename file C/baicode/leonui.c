#include <stdio.h>
void input(int n, int a[][2])
{
int i,j;
    for ( i = 0; i < n; i++)
        for ( j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
}
int min(int n, int a[][2], int k)
{
    int min_num = a[0][k];
    int i;
    for (i = 1; i < n; i++)
        if (min_num > a[i][k])
            min_num = a[i][k];
    return min_num;
}
int main()
{
    int n, a[25000][2], sum1 = 0, sum0 = 0, time_min;
    scanf("%d", &n);
    input(n, a);
    int i;
    for ( i = 0; i < n; i++)
    {
        sum0 += a[i][0];
        sum1 += a[i][1];
    }
    if (sum0 > sum1)
        time_min = sum0 + min(n, a, 1);
    else
        time_min = sum1 + min(n, a, 0);
    printf("%d", time_min);
}
