#include <stdio.h>
int factorial(int a)
{
    if (a==0)
    {
        return 1;
    }
    else
    {
        return(factorial(a-1)*a);
    }
}
int isstronk(int a)
{
    int b=0,c=a;
    while (a!=0)
    {
        b+=factorial(a%10);
        a/=10;
    }
    if(c==b)
    {
        return 1;
    }
    else return 0;
}

int main() {
    int n;
    int a[100];
    scanf("%d\n",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Strong numbers:\n");
    for (int i=0;i<n;i++)
    {
        if(isstronk(a[i]))
        {
            printf("%d\n",a[i]);
        }
    }
}
