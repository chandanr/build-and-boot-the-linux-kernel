main : main.o add.o add.h
	cc -o main main.o add.o

main.o : main.c add.h
	cc -c main.c

add.o : add.c add.h
	cc -c add.c
