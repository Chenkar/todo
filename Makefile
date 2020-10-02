all: main.o taskFunctions.o
	gcc -o todo main.o taskFunctions.o

main.o: main.c taskFunctions.h
	gcc -c main.c
taskFunctions.o: taskFunctions.c taskFunctions.h
	gcc -c taskFunctions.c

clean:
	rm todo *.o
