# Отчёт по лабораторной работе №5 по курсу “Фундаментальная информатика”

<b>Студент группы:</b> <ins>М80-108Б-22 Халимов Исмоилджон Ибрагимджонович, № по списку 22</ins> 

<b>Контакты e-mail:</b> <ins>lirikfeed049@gmail.com</ins>

<b>Работа выполнена:</b> «15» <ins>октября</ins> <ins>2022</ins> г.

<b>Преподаватель:</b> <ins>асп. каф. 806 Сахарин Никита Александрович</ins>

<b>Входной контроль знаний с оценкой:</b> <ins></ins>

<b>Отчет сдан</b> «24» <ins>сентября</ins> <ins>2022</ins> г., <b>итоговая оценка</b> <ins></ins>

<b>Вариант  8 </b>

<b>Подпись преподавателя:</b> ________________


### 1. Тема работы:
__Программирование машин Тьюринга__

### 2. Цель работы:
__Научиться работать на машине Тьюринга__

### 3. Задание:
__Обмен местами разрядов двоичного числа, находящихся на чёиных и нечётных позициях__

### 4. Оборудование:
___Процессор___: AMD Ryzen 5 3500U (8) @ 2.10GHz \
___ОП___: 6940MiB \
___SSD___: 256 GB

### 5. Программное обеспечение:
___Операционная система семейства___ UNIX, ___наименование___ Manjaro Linux, ___версия___  5.15.65-1-MANJARO
___Интерпритатор команд___ bash, ___версия___ 5.1.16
___Редактор текстов___ nano

### 6. Идея, метод, алгоритм решения:
__Для выполнения задания я использую команды из справочника по работе с машиной Тьюринга__

### 7. Сценарий выполнения работы:
#### Формат команды: q,a,v,q':
1. q - текущее состояние;
2. a - знак, который видим на ленте;
3. v - знак, который пишем или команда;
4. q' - состояние, в которое переходим.
#### Возможные команды МТ:
1. '>' - движение головки вправо;
2. '<' - движение головки влево;
3. '=' - отсутствие движения на данном такте;
4. '#' - полная остановка машины.


### 8.Код для решения задачи:

```
00, ,<,rep
rep,0,<,movie  rep,1,<,movei  rep, ,#,rep  
movie,0,<,rep  movie,1,0,mov
movei,1,<,rep  movei,0,1,mov
rap,0,1,move rap,1,0,move
mov,0,>,rap mov,1,>,rap
move,0,<,movee move,1,<,movee
movee,0,<,rep movee,1,<,rep

```

### Код для работы от начала примера:
```

00, ,<,start
start, ,>,rep  start,1,<,start start,0,<,start 
rep,0,>,movie  rep,1,>,movei  rep, ,#,rep  
movie,0,>,rep  movie,1,0,mov  movie, ,#,movie
movei,1,>,rep  movei,0,1,mov  movei, ,#,movei
rap,0,1,move rap,1,0,move
mov,0,<,rap mov,1,<,rap
move,0,>,movee move,1,>,movee
movee,0,>,rep movee,1,>,rep

```

### 9.Вывод работы:

__Изучив комнады для работы на машине Тьюринга я смог выполнить посталенную передо мной задачу__
