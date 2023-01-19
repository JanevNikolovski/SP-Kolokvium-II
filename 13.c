#include <stdio.h>
#define MAX 100
void transform (int a[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        if (a[i]==a[i+1])
        {
            a[i]*=2;
            a[i+1]=0;
        }
    }
}
void reorder (int *a,int n)
{
    int temp,min=1;
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-min;j++)
        {
            if(a[j]==0)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        min++;
    }
}
int main() {
    int a[MAX];
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    transform(a,n);
    reorder(a,n);
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
