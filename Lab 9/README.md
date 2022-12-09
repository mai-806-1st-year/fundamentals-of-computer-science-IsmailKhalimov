# Отчёт по лабораторной работе №10 по курсу "Фундаментальная информатика"

<b>Студент группы:</b> <ins>М80-108Б-22 Халимов Исмоилджон Ибрагимджонович, № по списку 22</ins> 

<b>Контакты e-mail:</b> <ins>lirikfeed049@gmail.com</ins>

<b>Работа выполнена:</b> «27» <ins>ноября</ins> <ins>2022</ins> г.

<b>Преподаватель:</b> <ins>асп. каф. 806 Сахарин Никита Александрович</ins>

<b>Входной контроль знаний с оценкой:</b> <ins></ins>

<b>Отчет сдан</b>  <ins></ins>  <ins> </ins> 2022 г., <b>итоговая оценка</b>  <ins></ins>

<b>Подпись преподавателя:</b> ________________


# 1. Тема
Отладчик системы программирования ОС UNIX
## 2. Цель работы
Научиться отлаживать простейшие программы, написанные на языке Си.
## 3. Задание (вариант № -)
Написать простейшую программу на языке и отладить её.
## 4. Оборудование
<b>Процессор:</b> AMD Ryzen 5 3500U (8) @ 2.10GHz<br/>
<b>ОП:</b> 6940MiB<br/>
<b>Текстовый редактор:</b> Visual Studio Code <br/>
## 5. Программное обеспечение:
<b>Операционная система семейства:</b> Microsoft Windows 10 Home <br/>
<b>Компилятор:</b> GNU Compiler Collection <br/>
<b>Текстовый редактор:</b> Visual Studio Code <br/>
## 6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)

| gdb |  Описание команды |
| ------ | ------ |
| help [раздел] | Подсказка по разделу отладчика. Без параметров выводит список разделов. |
| list [имя фукнции/файла:] [номер строки] | Распечатка текста функции/процедуры/файла или всей программы, начиная с указанной строки. По умолчанию распечатываются 10 строк программы. Распечатываемый файл становится текущим файлом исходного текста отлаживаемой программы. |
| break [номер строки/имя функции] | Задание точки остановки на строке/функции текущего исходного файла программы. |
| run [параметры] | Запуск программы на выполнение. Могут указываться необязательные параметры командной строки и операции перенаправления ввода-вывода. gdb запоминает параметры и подставляет их для дальнейших вызовах run. |
| set args [параметры] | Предварительная установка параметров командной строки. |
| show args | Вывод параметров командной строки. |
| print [выражение] | Печать значения выражения, которое может включать и переменные, и вызовы функций программы. |
| next [n] | Выполнение очередной строки программы при пошаговой трассировке (процедуры и функции не трассируются, а выполняются за один такт). Необязательный параметр n указывает число строк программы для выполнения. По умолчанию n = 1. |
| step [n] | step [n]	Выполнение очередной строки программы (с трассировкой процедур и функций). Перед выполнением next/step программа должна быть запущена командой run. |
| set var [имя] = [выражение] | Присваивание значения переменной. |
| pytype [имя переменной] | Выводит тип переменной. |
| backtrace/bt | Распечатка содержимого стека вызовов. |
| continue | Продолжение выполнения программы после остановки. |
| quit | Выход из отладчика. |

## 7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]. 
```
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

```

Пункты 1-7 отчета составляются сторого до начала лабораторной работы.
Допущен к выполнению работы.  
<b>Подпись преподавателя:</b> ________________
## 8. Распечатка протокола 
```

PS C:\Users\lirik\OneDrive\Рабочий стол\Лаб> gdb 9.exe
C:\Users\lirik\gcc\bin\gdb.exe: warning: Couldn't determine a path for the index cache directory.
GNU gdb (GDB) 10.1
Copyright (C) 2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-w64-mingw32".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from 9.exe...
(gdb) break 35 if k%2==0
Breakpoint 1 at 0x4017a2: file C:\Users\lirik\OneDrive\Рабочий стол\Лаб\9.c, line 35.
(gdb) run
Starting program: C:\Users\lirik\OneDrive\Рабочий стол\Лаб\9.exe 
[New Thread 1892.0x1ae8]
warning: Can not parse XML library list; XML support was disabled at compile time

Thread 1 hit Breakpoint 1, main () at C:\Users\lirik\OneDrive\Рабочий стол\Лаб\9.c:35
35          if (((s.i == -10) && (belongs(s.j, 0, 20))) || ((belongs(s.i, -9, 0) && ((s.i - s.j == -10) || (s.i + s.j == 10))) && belongs(s.j, 1, 19))) {
(gdb) print k
$1 = 0
(gdb) display k
1: k = 0
(gdb) display s.i
2: s.i = 27
(gdb) continue
Continuing.

Thread 1 hit Breakpoint 1, main () at C:\Users\lirik\OneDrive\Рабочий стол\Лаб\9.c:35
35          if (((s.i == -10) && (belongs(s.j, 0, 20))) || ((belongs(s.i, -9, 0) && ((s.i - s.j == -10) || (s.i + s.j == 10))) && belongs(s.j, 1, 19))) {
1: k = 2
2: s.i = 20
(gdb) continue
Continuing.

Thread 1 hit Breakpoint 1, main () at C:\Users\lirik\OneDrive\Рабочий стол\Лаб\9.c:35
35          if (((s.i == -10) && (belongs(s.j, 0, 20))) || ((belongs(s.i, -9, 0) && ((s.i - s.j == -10) || (s.i + s.j == 10))) && belongs(s.j, 1, 19))) {
1: k = 4
2: s.i = 29
(gdb) continue
Continuing.

Thread 1 hit Breakpoint 1, main () at C:\Users\lirik\OneDrive\Рабочий стол\Лаб\9.c:35
35          if (((s.i == -10) && (belongs(s.j, 0, 20))) || ((belongs(s.i, -9, 0) && ((s.i - s.j == -10) || (s.i + s.j == 10))) && belongs(s.j, 1, 19))) {
1: k = 6
2: s.i = 16
(gdb) list 10
5       #include <stdbool.h>
6       typedef struct {
7           int i, j, l ;
8       } triang ;
9       int max (int a, int b) {
10          return a < b ? b : a;
11      }
12      int min (int a, int b){
13          return a > b ? b : a;
14      }
(gdb) quit
A debugging session is active.

        Inferior 1 [process 1892] will be killed.

Quit anyway? (y or n) y
PS C:\Users\lirik\OneDrive\Рабочий стол\Лаб> 

```

## 9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.

| № |  Лаб. или дом. | Дата | Время | Событие | Действие по исправлению | Примечание |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 1 | дом. | 27.11.22 | 16:00 | Выполнение лабораторной работы | - | - |
## 10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.
Защита была проведена без замечаний.
## 11. Выводы
Была написана и отлажена простейшая программа на языке на Си. В результате выполнения работы, были приобретены навыки, которые будут полезны для выполнения других лабораторных работ.

Недочёты при выполнении задания могут быть устранены следующим образом: —

<b>Подпись студента:</b> ____________________
