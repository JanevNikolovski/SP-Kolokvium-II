#include <stdio.h>
#include <ctype.h>
//#define DEBUG 1
void writeToFile();

int main() {
    int flag=0;
    writeToFile();
    FILE *f = fopen("text.txt", "r");
    if (f==NULL)
    {
        printf("FILE OPEN ERROR!!!");
        return -1;
    }
    char c;
    while((c=fgetc(f)) && (c!=EOF))
    {
#ifdef DEBUG
        printf("%c",c);
#endif

        if (isalpha(c))
        {
            printf("%c",c);
            flag=1;
        }
        if ((c==' ' || c=='\n') && flag==1)
        {
            printf("\n");
            flag=0;
        }
    }

    fclose(f);
}

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
