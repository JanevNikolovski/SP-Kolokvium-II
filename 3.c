#include <stdio.h>
void ldigit(int *a,int *b, int n)
{
    for(int i=0;i<n;i++)
    {
        *(b+i)=*(a+i)%10;
    }
}
int sum(int *a, int *b)
{

    if (*a%10==*b)
    {
        *a/=10;
        return sum( a, b)+1;
    }
     if (*a/10==0)
    {
        return 0;
    }
    *a/=10;
    return sum( a, b);
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    ldigit(a,b,n);
    for(int i=0;i<n;i++)
    {
        *(a+i)=sum(a+i,b+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
