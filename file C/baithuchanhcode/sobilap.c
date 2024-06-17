#include <stdio.h>
void nhapmang(int n, int a[], int b[], int c[])
{
	int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]] = 0;
        c[a[i]] = 0;
    }
}
int LN(int n, int a[], int b[])
{
    int max = b[a[0]];
    int i;
    for ( i = 0; i < n; i++)
        if (max < b[a[i]])
            max = b[a[i]];
    return max;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[100], b[100000], n, max, c[100000];
        scanf("%d", &n);
        nhapmang(n, a, b, c);
        int i;
        for (i = 0; i < n; i++)
            b[a[i]]++;
        max = LN(n, a, b);
        for (i = 0; i < n; i++)
            if (b[a[i]] == max && c[a[i]] == 0)
            {
                printf("%d ", a[i]);
                break;
            }
        printf("\n");
    }
}
