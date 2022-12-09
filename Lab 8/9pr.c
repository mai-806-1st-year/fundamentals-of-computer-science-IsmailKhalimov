// Защита лабораторной работы номер 9
// Студент: Халимов Исмоилджон Ибрагимджонович (М8О-108Б-22)

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// функция "Принадлежит"
int belongs(int x, int a, int b){
    return ((x >= a) && (x <=b)) ? true : false;
}
int main(void) {
    hexagon();
}
int hexagon(){
    int x, y, r, x1, y1;
    scanf ("%d %d %d", &x, &y, &r);
    scanf ("%d %d", &x1, &y1);
    float p = (r * sqrt(3)) * 0.5;
    int k = 0;
    // Проверка нахождения точки x1 внутри 6-угольника
    if (belongs(x1, x - r, x - (r * 0.5)) || belongs(x1, x + (r*0.5), x + r)) {
        for(float i = 0; i <= (r * 0.5); i+=0.5) {
            int k1 = 0;
            float r1 = r - i;
            if ((x1 == x - r1 || x1 == x + r1) && belongs(y1, y - (p / (r-k1)), y + (p / (r-k1)))) {
                printf ("HIT!");
                return 0;
            } 
            else {
                k = 0;
            }
            k1 += 1;
        }
    }
    if ((belongs(x1, x - (r * 0.5), x) || belongs(x1, x, x + (r * 0.5))) && belongs(y1, y - p, y + p)) {
        k = 1;
    }
    if (k == 1) {
        printf ("HIT!");
    }
    else {
        printf("Missing(");
    }
    return 0;
    
}
