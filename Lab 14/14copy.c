#include <stdio.h>
void inputs(int m, int (*locate));
void checking(int n, int m, int (*locate));

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int locate[m * 2];
    inputs(m, locate);
    checking(n, m, locate);
    return 0;
}

void inputs(int m, int (*locate)) {
    for (int x = 0; x < (2 * m); ++x){
        scanf("%d", &locate[x]);
    }
}

void checking(int n,int m, int (*locate)){
    int check = 0;
    for (int i = 0; i < m - 1; ++i){
        if ((locate[i] == locate[i+2]) || (locate[i+1] == locate[i+3]) || (n <= m)) {
            ++check;
        }
    }
    if (check > 0){
        printf("NO");
    } else {
        printf("YES");
    }
}