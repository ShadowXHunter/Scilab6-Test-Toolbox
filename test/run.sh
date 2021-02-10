#Shell script to compile and execute trans.c and main.c files
#Author: Hirokjyoti Dutta
#Mail: hjduttaxx@gmail.com

rm *.o *.so *.lib *.exe

gcc -Wall -c trans.c
gcc -Wall -c main.c
gcc -o transpose main.o trans.o
./transpose