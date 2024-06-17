#include <stdio.h>
void nhapnmang(int n, int a[][100])
{
    int i, b = n;
    for (i = 1; i <= n; i++)
        a[0][i - 1] = i;
        int j,k,m,l,f;
    for (j = 1; j <= b / 2; j++)
    {
        for (k = j; k < n; k++)
            a[k][n - 1] = i, i++;
        for ( m = n - 2; m >= j - 1; m--)
            a[n - 1][m] = i, i++;
        for ( l = n - 2; l >= j; l--)
            a[l][b - n] = i, i++;
        for ( f = j; f < n - 1; f++)
            a[b + 1 - n][f] = i, i++;
        n--;
    }
}
void inmang(int n, int a[][100])
{
	int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int n, a[100][100];
    scanf("%d", &n);
    nhapnmang(n, a);
    inmang(n, a);
}
