#include <stdio.h>
#define MAX 100
//#define DEBUG 1
int main() {
    int a[MAX][MAX];
    int m, n;
    scanf("%d %d\n", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x,y;
    scanf("%d %d\n",&x,&y);
    if(a[x][y]==0)
    {
        a[x][y]=1;
        for(int i=y-1;i>=0 && a[x][i]!=1;i--)
        {
            a[x][i]=1;
        }
        for(int i=y+1;i<=n && a[x][i]!=1;i++)
        {
            a[x][i]=1;
        }
        
        for(int i=x-1;i>=0 && a[i][y]!=1;i--)
        {
            a[i][y]=1;
        }
        for(int i=x+1;i<=m && a[i][y]!=1;i++)
        {
            a[i][y]=1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
