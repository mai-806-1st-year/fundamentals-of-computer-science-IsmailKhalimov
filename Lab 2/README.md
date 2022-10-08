# Лабораторная работа №3 по курсу "Фундаментальная информатика"
___ФИО:___ Халимов Исмоилджон Ибрагимджонович \
___Группа:___ М8О-108Б-22 \
___Преподаватель:___ Сахарин Никита Александрович

### 1. Тема работы:
__Сети и телекоммуникации в ОС UNIX__

### 2. Цель работы:
__Обучение навыкам, необходимым для подключения к другим устройствам UNIX__

### 3. Задание:
__Запомнить основные команды и опробовать их на практике__

### 4. Оборудование:
___Прицессор___: AMD Ryzen 5 3500U (8) @ 2.10GHz \
___ОП___: 6940MiB \
___SSD___: 256 GB

### 5. Программное обеспечение:
___Операционная система семейства___ UNIX, ___наименование___ Manjaro Linux, ___версия___  5.15.65-1-MANJARO
___Интерпритатор команд___ bash, ___версия___ 5.1.16
___Редактор текстов___ nano

### 6. Идея, метод, алгоритм решения:
__Для достижения поставленной цели используем основные команды для удалённого подключения к устройствам.__

### 7. Сценарий выполнения работы:
#### Используемые команды для:

    ssh user@ip
_удалённое подключение к устройству с определённым ip_

    rlogin
_запуск процесса login того же пользователя на псевдотерминале_

    telnet
_запускается процесс инициалтзации псевдотерминала getty на удалённой машине_

    scp 
_копирование файла из текущей машиы в удаённую_

    rsync
_синхронизация каталогов на разных ЭВМ_

    tar
_копирование файлов и каталогов в файл сжатого архива_

    get
_получение файлов из удалённой машины_

    put
_передача файлов на удалённую машину_
    
    mget
_групповое получение файлов из удалённой машны_

    mput
_групповая передача файлов на удалённую машину_

### 8.Пример работы команд:

```
stud@it-17:~$ ssh stud@192.168.2.162
The authenticity of host '192.168.2.162 (192.168.2.162)' can't be established.
ED25519 key fingerprint is SHA256:YIsChpiFwtLa0j9mRsG8e1xcA9rZlWTiM0whDRRSsxA.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '192.168.2.162' (ED25519) to the list of known hosts.
stud@192.168.2.162's password: 
Welcome to Ubuntu 22.04.1 LTS (GNU/Linux 5.15.0-47-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

151 updates can be applied immediately.
57 of these updates are standard security updates.
To see these additional updates run: apt list --upgradable


The list of available updates is more than a week old.
To check for new updates run: sudo apt update
Last login: Sat Oct  8 10:00:50 2022 from 192.168.2.163
stud@it-32:~$ ls
1.txt    Desktop    fil1      hello   Pictures  Public  Templates  xyu.txt
aaa.txt  Documents  fil1.txt  Music   ping.gz   remote  test.txt   XYZ
ar.tar   Downloads  ghfs      ourdir  ping.txt  snap    Videos
stud@it-32:~$ touch text.txt
stud@it-32:~$ ls
1.txt    Desktop    fil1      hello   Pictures  Public  Templates  Videos
aaa.txt  Documents  fil1.txt  Music   ping.gz   remote  test.txt   xyu.txt
ar.tar   Downloads  ghfs      ourdir  ping.txt  snap    text.txt   XYZ
stud@it-32:~$ logout
Connection to 192.168.2.162 closed.
stud@it-17:~$ scp 4444.txt stud@192.168.2.162:/home/stud
stud@192.168.2.162's password: 
4444.txt                                      100%    0     0.0KB/s   00:00    
stud@it-17:~$ ssh stud@192.168.2.162
stud@192.168.2.162's password: 
Welcome to Ubuntu 22.04.1 LTS (GNU/Linux 5.15.0-47-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

151 updates can be applied immediately.
57 of these updates are standard security updates.
To see these additional updates run: apt list --upgradable


The list of available updates is more than a week old.
To check for new updates run: sudo apt update
Last login: Sat Oct  8 10:31:04 2022 from 192.168.2.160
stud@it-32:~$ ls
1.txt     Desktop    fil1.txt  ourdir    Public     test.txt  XYZ
4444.txt  Documents  ghfs      Pictures  remote     text.txt
aaa.txt   Downloads  hello     ping.gz   snap       Videos
ar.tar    fil1       Music     ping.txt  Templates  xyu.txt

```

### 9.Вывод работы:

__Изучив основные команды для телекомуникации я научился удалённо совершать действия на устройстве__
