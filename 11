#include <stdio.h>

int main() {
    int a[100][100],b[100][100];
    int m,n;
    scanf("%d %d\n",&m,&n);
    
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<m;j++)
    {
            for(int i=0;i<n;i++)
        {
            b[i][j]=0;
            if(i>0 && (a[i-1][j])>0)
            {
                b[i][j]+=a[i-1][j];
            }
            if(i<n-1 && (a[i+1][j])>0)
            {
                b[i][j]+=a[i+1][j];
            }
            if(j>0 && (a[i][j-1])>0)
            {
                b[i][j]+=a[i][j-1];
            }
            if(j<m-1 && (a[i][j+1])>0)
            {
                b[i][j]+=a[i][j+1];
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
