caculator: funcs.o scanner.o main.o 
	gcc -Wall funcs.o scanner.o main.o -o calculator 

main.o: funcs.o
	gcc -c -Wall main.c -o main.o

funcs.o:
	gcc -c -Wall funcs.c -o funcs.o

scanner.o: funcs.o
	gcc -c -Wall scanner.c -o scanner.o
