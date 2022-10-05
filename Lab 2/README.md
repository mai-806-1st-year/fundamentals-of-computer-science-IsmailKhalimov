# Лабораторная работа №2 по курсу "Фундаментальная информатика"
___ФИО:___ Халимов Исмоилджон Ибрагимджонович \
___Группа:___ М8О-108Б-22 \
___Преподаватель:___ Сахарин Никита Александрович

### 1. Тема работы:
__Операционная среда ОС UNIX__

### 2. Цель работы:
__Анализ и освоение Программного Обеспечения ОС UNIX. Обучение навыкам, необходимым для выполнения лабораторных работ в среде UNIX__

### 3. Задание:
__Запомнить основные функции команд в терминале ОС UNIX и опробовать их на практике__

### 4. Оборудование:
___Прицессор___: AMD Ryzen 5 3500U (8) @ 2.10GHz \
___ОП___: 6940MiB \
___SSD___: 256 GB

### 5. Программное обеспечение:
___Операционная система семейства___ UNIX, ___наименование___ Manjaro Linux, ___версия___  5.15.65-1-MANJARO
___Интерпритатор команд___ bash, ___версия___ 5.1.16
___Редактор текстов___ nano

### 6. Идея, метод, алгоритм решения:
__Для достижения поставленной цели используем основные команды bash для работы с каталогами, текстовыми файлами, тектовыми редакторами и некоторыми утилитами.__

### 7. Сценарий выполнения работы:
#### Используемые команды для:

    whoami
_просмотра действительного идентификатора пользователя (UID)_

    who
_вывода информации о пользователях, которые подключены к системе, в том числе и о терминальных сессиях, через которые происходит подключение_

    date
_вывода текущего времени_

    pwd 
_вывода полного пути от корневого каталога к текущему рабочему каталогу_

    ls 
_просмотра текущего каталога и содержимого в папке_

    cd
_смены текущего каталога_

    cp
_копирования файлов и каталогов_

    mv
_перемещения и переименования файлов и каталогов_
    
    mkdir
_создания каталога_

    rmdir
_удаления каталогов из файловой системы_

    rm
_удаления папок и файлов_

    man
_просмотра справочных руководств системы_

    cat
_просмотра содержимого в файле_

##### Скрипт для создания протокола
```
#!/bin/bash
echo "Hi $(whoami)"
echo "Time is now: $(date)"
echo "You are in the folder: $(pwd)"
echo  "There are folder here: $(ls -l)"
```

### 8.Пример работы команд:

```
ismail@ismail-VirtualBox:~$ whoami
ismail
ismail@ismail-VirtualBox:~$ who
ismail   tty2         2022-10-01 09:14 (tty2)
ismail@ismail-VirtualBox:~$ date
Сб 01 окт 2022 09:49:32 MSK
ismail@ismail-VirtualBox:~$ pwd
/home/ismail
ismail@ismail-VirtualBox:~$ ls
 snap            text.sh   Документы   Изображения   Общедоступные   Шаблоны
 StartWithUNIX   Видео     Загрузки    Музыка       'Рабочий стол'
ismail@ismail-VirtualBox:~$ nano text.txt
ismail@ismail-VirtualBox:~$ cat text.txt
First Test

ismail@ismail-VirtualBox:~$ cp text.txt Документы
ismail@ismail-VirtualBox:~$ cd Документы
ismail@ismail-VirtualBox:~/Документы$ ls
text.txt
ismail@ismail-VirtualBox:~/Документы$ rm text.txt
ismail@ismail-VirtualBox:~/Документы$ ls
ismail@ismail-VirtualBox:~/Документы$ cd -
/home/ismail
ismail@ismail-VirtualBox:~$ mkdir dir/
ismail@ismail-VirtualBox:~$ ls
 dir             text.sh    Документы     Музыка          Шаблоны
 snap            text.txt   Загрузки      Общедоступные
 StartWithUNIX   Видео      Изображения  'Рабочий стол'
ismail@ismail-VirtualBox:~$ rm -r dir
ismail@ismail-VirtualBox:~$ ls
 snap            text.txt    Загрузки      Общедоступные
 StartWithUNIX   Видео       Изображения  'Рабочий стол'
 text.sh         Документы   Музыка        Шаблоны
ismail@ismail-VirtualBox:~$ 
```

#### Запуск скрипта:
```
ismail@ismail-VirtualBox:~$ ./text.sh
The current date is:
Сб 01 окт 2022 09:56:32 MSK
The username is:
ismail
The informasion about user:
ismail   tty2         2022-10-01 09:14 (tty2)
The current directory is:
/home/ismail
There are all Folders
итого 48
drwx------ 5 ismail ismail 4096 сен 24 13:00  snap
drwxrwxr-x 3 ismail ismail 4096 сен 27 13:18  StartWithUNIX
-rwxrwxr-x 1 ismail ismail  187 сен 28 15:32  text.sh
-rw-rw-r-- 1 ismail ismail   12 окт  1 09:50  text.txt
drwxr-xr-x 2 ismail ismail 4096 сен 24 12:53  Видео
drwxr-xr-x 2 ismail ismail 4096 окт  1 09:51  Документы
drwxr-xr-x 2 ismail ismail 4096 сен 27 13:06  Загрузки
drwxr-xr-x 2 ismail ismail 4096 сен 24 12:53  Изображения
drwxr-xr-x 2 ismail ismail 4096 сен 24 12:53  Музыка
drwxr-xr-x 2 ismail ismail 4096 сен 24 12:53  Общедоступные
drwxr-xr-x 3 ismail ismail 4096 сен 27 12:45 'Рабочий стол'
drwxr-xr-x 2 ismail ismail 4096 сен 24 12:53  Шаблоны
```

### 9.Вывод работы:

__Я вводил команды ОС UNIX попутно изучая подробности их функций. Получил базовые знания работы с терминалом. Также ввёл команды в скрипт и запустил его.__

