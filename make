gcc -ansi -pedantic -Wall -Werror -O3 -c alib.c aobj.c asum.c
ar rcs liba.a *.o
gcc -ansi -pedantic -Wall -Werror -O3 -o atest *.o atest.c
