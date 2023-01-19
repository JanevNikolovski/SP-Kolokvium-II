#include <stdio.h>
//#define DEBUG 1
int main() {
    int n, m = 0;
    float a[100][100], b[100];
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
#ifdef DEBUG
        printf("\n");
#endif
        for (int j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
            if (i == 0 || i == n-1 || i + j == n - 1) {
                b[m] = a[i][j];
                printf("%.2f ",b[m]);
                m++;
            }
#ifdef DEBUG
            printf("%.2f ", a[i][j]);
#endif
        }
    }
    printf("\n");
    m--;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || i + j == n-1) {
                a[i][j]=b[m];
                m--;
            }
            printf("%.2f ",a[i][j]);
        }
        printf("\n");
        }
    }

