#include <stdio.h>

enum { maxn = 100 };

int main(){
    int m[maxn][maxn];
    int n;
    scanf("%d", &n);
    for (int i = 0; i != n; ++i)
        for (int j = 0; j != n; ++j)
            scanf("%d", &m[i][j]);
    int first_stop = n - 1;
    int second_stop = 0;
    int i = 0, j = 0;
    printf("%d\n", m[i][j]);
    for (int k = 0; k < (n / 2) + 1; ++k){
        while (j < first_stop){
            ++j;  
            printf("%d\n", m[i][j]);  
        }
        while (i < first_stop) {
            ++i;
            printf("%d\n", m[i][j]);
        }
        while (j > second_stop) {
            j -= 1;
            printf("%d\n", m[i][j]);
        }
        while (i > (second_stop + 1)) {
            i -= 1;
            printf("%d\n", m[i][j]);
        }
        first_stop -= 1;
        ++second_stop;
    }

    putchar('\n');
    return 0;
}  
                                 