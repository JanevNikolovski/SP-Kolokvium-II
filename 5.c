#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("numbers.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    FILE *f =fopen("numbers.txt","r");
    int c,n,temp,max,test;
    while(fscanf(f,"%d",&c) && c!= 0)
    {
        n=c;
        fscanf(f,"%d",&c);
        max=c;
        test=max;
        while (test/10!=0)
        {
            test/=10;
        }
        for (int i=0;i<n-1;i++)
        {
            fscanf(f,"%d",&c);
            temp=c;
            while (temp/10!=0)
            {
                temp/=10;
            }
            if (temp>test)
            {
                test=temp;
                max=c;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
