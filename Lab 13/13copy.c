#include <stdio.h>

void elements_input(int n, int (*m));
void checking_for_non_decreasing(int n, int (*m));

int main(void) {
    int n;
    scanf("%d", &n);
    int m[n];
    elements_input(n, m);
    checking_for_non_decreasing(n, m);
}

void checking_for_non_decreasing(int n, int (*m)){
    for (int i = 0; i < n; ++i) {
        if ((m[i] > n) || (m[i] == 0) || (n < 3)){
            printf("Isn't correct data");
            m[1] = 10;
            break;
        }
    }
    if (m[0] != 1)  {
        printf("NO");
    } else if (m[1] != 10){
        printf("YES");
    }
}
void elements_input(int n, int (*m)){
    for (int i = 0; i < n; ++i) {
        scanf ("%d", &m[i]);
    }
}