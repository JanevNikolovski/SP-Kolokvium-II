#include <stdio.h>
#include <string.h>
#define MAX 201
//#define DEBUG 1
// DO NOT CHANGE HERE
void wtf() {
    FILE *f = fopen("datnum.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("datnum.txt", "r");
    char max[MAX],temp[MAX],c;
    int num=0,let=0,i=0;
    float ratio=0,tempratio=0;
//    while((c = fgetc(f)) != '\n') {
//        putchar(c);
//    }
    while ((c=fgetc(f)) != '\n') {
        max[i]=c;
        if (max[i] >= 'A' && max[i] <= 'z')
        {
            let++;
        }
        if (max[i] >= '0' && max[i] <= '9')
        {
            num++;
        }
        i++;
    }
    max[i]='\0';
    ratio=(num*1.0)/let;
#ifdef DEBUG
    printf("string:%s let:%d num:%d ratio:%f len:%d\n",max,let,num,ratio,i);
#endif
    num=0;
    let=0;
    i=0;
    while((c=fgetc(f)))
    {
        temp[i]=c;
        if (temp[i]>='A' && temp[i]<='z')
        {
            let++;
        }
        if (temp[i]>='0' && temp[i]<='9')
        {
            num++;
        }
#ifdef DEBUG
        printf("%c",temp[i]);
#endif
        if (temp[i]=='\n' || temp[i]==EOF) {
            temp[i]='\0';
#ifdef DEBUG
            printf(" num:%d let:%d ratio:%f\n",num,let,ratio);
#endif
            if (let != 0) {
                tempratio = (num * 1.0) / let;
#ifdef DEBUG
                printf(" tempratio:%f\n",tempratio);
#endif
                if (ratio <= tempratio) {
                    ratio = tempratio;
#ifdef DEBUG
                    printf("string:%s let:%d num:%d ratio:%f len:%d\n",temp,let,num,tempratio,i);
#endif
                    strncpy(max,temp,MAX);
                    num=0;
                    let=0;
                    i=-1;
                }
                tempratio = 0;
                num=0;
                let=0;
                i=-1;
            } else {
                tempratio = -1;
#ifdef DEBUG
                printf("string:%s let:%d num:%d ratio:%f len:%d\n",temp,let,num,tempratio,i);
#endif
                num=0;
                let=0;
                i=-1;
            }
        }
        if(feof(f)) break;
        i++;
    }
    printf("%s",max);
}
