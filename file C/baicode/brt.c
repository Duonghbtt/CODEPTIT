#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(int n, int a[])
{
	int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int sort(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
    	int i;
        int n, a[100010], b[100000];
        scanf("%d", &n);
        input(n, a);
        qsort(a, n, sizeof(a[0]), sort);
        for ( i = 0; i < n - 1; i++)
            b[i] = a[i + 1] - a[i];

        int min = b[0];
        for ( i = 1; i < n - 1; i++)
            if (min > b[i])
                min = b[i];
        int num = 0;
        for (i = 0; i < n - 1; i++)
            if (min == b[i])
                num++;
        printf("%d %d\n", min, num);
    }
}
