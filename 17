#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#define DEBUG 1
// DO NOT CHANGE!

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    char s[22],n=0,i=0;
    int hex=1,counter=0;
    wtf();
    FILE *f = fopen("input.txt", "r");
    while (fscanf(f,"%s\n",s)!=EOF)
    {
#ifdef DEBUG
        printf("%s\n",s);
#endif
        hex=1;
        i=0;
        while ((s[i]!='\0') && hex==1)
        {
            s[i]= toupper(s[i]);
            if(!(isxdigit(s[i])))
            {
                hex=0;
            }
            i++;
        }
        if (hex==1)
        {
            counter++;
            printf("%s\n",s);
        }
    }
    printf("Total: %d",counter);
    fclose(f);
}



