#include <stdio.h>
int main()
{
    char s[80];
    int n,x;
    int j;
    char temp;
    scanf("%d %d\n",&n, &x);

    for (int i=0;i<n;i++)
    {
        j=0;
        while((j<79)&&(temp=getchar())!='\n')
        {
            if(temp>='A' && temp<='Z')
            {
                if(temp+x>'Z')
                {
                    s[j++]=(temp+x)-'Z'+'A'-1;
                }
                else
                    s[j++]=temp+x;
            }
            else if (temp>='a' && temp<='z')
            {
                if(temp+x>'z')
                {
                    s[j++]=(temp+x)-'z'+'a'-1;
                }
                else
                    s[j++]=temp+x;

            }
            else
                s[j++]=temp;
        }
        s[j] = '\0';
        printf("%s\n",s);
    }
}
