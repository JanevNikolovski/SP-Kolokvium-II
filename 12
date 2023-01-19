#include <stdio.h>
#define NODIGIT 0
#define ONEDIGIT 1
#define TWODIGIT 2
int main() {
    char a[100];
    int i;
    int state=NODIGIT;
    scanf("%s\n",a);
    for(i=0;i<99 && a[i]!=0;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            if (state==NODIGIT)
            {
                state=ONEDIGIT;
                printf("%c",a[i]);
            }
            else if (state==ONEDIGIT)
            {
                state=TWODIGIT;
                printf("%c",a[i]);
            }
        }
        else if(state==ONEDIGIT)
        {
            printf("%c",a[i]);
        }

    }
    if (state==NODIGIT)
    {
        printf("No digits");
    }
    printf("\n");
}
