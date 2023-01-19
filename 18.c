#include <stdio.h>
#include <string.h>
//#define DEBUG 1
#define MAX 100


//ne menuvaj!
void wtf() {
    FILE *f = fopen("sp.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void rff() {
    FILE *f = fopen("output.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("sp.txt", "r");
    FILE *v = fopen("output.txt", "w");
    char c;
    int n;
    fscanf(f,"%d\n",&n);
#ifdef DEBUG
    printf("%d\n",n);
#endif
//    while((c = fgetc(f)) != EOF)
    while (fscanf(f, "%c",&c) && !feof(f))
    {
#ifdef DEBUG
        printf("%c",c);
#endif
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'|| c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            for(int i=0;i<n;i++)
            {
                fputc(c,v);
            }
        }
        else
        {
            fputc(c,v);
        }
    }
#ifdef DEBUG
    printf("<EOF>\n");
#endif
    fclose(f);
    fclose(v);
    rff();
    return 0;

}
