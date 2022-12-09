// Лабораторная работа номер 9
// Студент: Халимов Исмоилджон Ибрагимджонович (М8О-108Б-22)

#include <stdio.h>
#include <stdbool.h>
typedef struct {
    int i, j, l ;
} triang ;
int max (int a, int b) {
    return a < b ? b : a;
}
int min (int a, int b){
    return a > b ? b : a;
}
int sign(int a){
    return a > 0 ? 1 : a < 0 ? -1 : 0;
}
// Остаток от деления
int mod(int divis, int divid){
    return divis < 0 ? abs(divid) - (abs(divis) % divid) : divis % divid;
}
// Функция "Принадлежит"
int belongs(int x, int a, int b){
    return ((x >= a) && (x <=b)) ? true : false;
}
int main(void){

triang s = {-12, -22, 11} ;

for(int k = 0; k < 51; k++){
    triang b = {s.i, s.j, s.l} ;
    s.i = max(mod(min(b.i-b.j, b.j-b.l), 20), mod(min(b.i-b.l, b.j-k), 20)) + 10;
    s.j = (sign(b.i-b.j) * min(mod(b.i, 20), mod(b.j, 20))) - mod(max(abs(b.i-b.l), abs(k-20)), 20) + 20;
    s.l = (mod(b.i, 10)) * (mod(b.j, 10)) + mod(b.l, 10);
    if (((s.i == -10) && (belongs(s.j, 0, 20))) || ((belongs(s.i, -9, 0) && ((s.i - s.j == -10) || (s.i + s.j == 10))) && belongs(s.j, 1, 19))) {
        printf ("%d, %d \n", s.i, s.j);
        printf("Hit!");
        return 0;
        
    }
}
printf ("Missing, \n");
printf ("%d, %d", s.i, s.j);
return 0;
}
