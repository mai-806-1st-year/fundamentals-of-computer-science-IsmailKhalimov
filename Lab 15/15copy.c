#include <stdio.h>

void inputs(int n, int (*blocked));
int count_choises(int n);

int main(void){
    int n;
    scanf("%d", &n);
    int blocked[n];
    inputs(n, blocked);
    printf("%d", count_choises(n));
    return 0;
}

void inputs(int n, int (*blocked)){
    for (int i = 0; i < n; ++i){
        scanf("%d", &blocked[i]);
    }
}

int count_choises(int n){
    int counter = 0;
    for (int i = n; i < 9; ++i){
        counter += 6 * (9 - i);
    }
    return counter;
}