// Лабораторная работа номер 8
// Студент: Халимов Исмоилджон Ибрагимджонович (М8О-108Б-22)
#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int det(int mat[3][3]){
    int o;
    o = (mat[0][0] * mat[1][1] * mat[2][2]) + (mat[1][0] * mat[2][1] * mat[0][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) - (mat[0][2] * mat[1][1] * mat[2][0]) - (mat[2][1] * mat[1][2] * mat[0][0]) - (mat[0][1] * mat[1][0] * mat[2][2]);
    if (o == 0) {
        printf("Векторы линейно зависимы \n");
    }
    else {
        printf("Векторы линейно независимы \n");
    }
    return 0;
}

int main(void) {
    int mat[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    det(mat);
}

