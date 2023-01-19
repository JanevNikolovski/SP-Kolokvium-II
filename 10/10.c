#include <stdio.h>
//#define DEBUG 1
int parcom(int a)
{
#ifdef DEBUG
    printf("%d ",a);
#endif
    if(a/10==0)
    {
        if (a%2==0)
        {
            return a+1;
        }
        else
        {
            return a-1;
        }
    }
    else if ((a%10)%2==0)
    {
        return (parcom(a/10)*10+(a%10)+1);
    }
    else
    {
        return (parcom(a/10)*10+(a%10)-1);
    }

}
int main() {
    int c,a[100],n=0;
    while(scanf("%d",&c))
    {
        a[n]=c;
        n++;
    }
#ifdef DEBUG
    printf("\n");
#endif
    for(int i=0;i<n;i++)
    {
        a[i]=parcom(a[i]);
#ifdef DEBUG
        printf("%d ",a[i]);
#endif
    }
int max=n-1;
int temp;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<max;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        max--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
