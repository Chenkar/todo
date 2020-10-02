#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "taskFunctions.h"
//Function Declarations

int main(int argc, char *argv[]) {
	int isRunning = 1;
	char *filename;
	filename = "todolist";
	struct task *head = NULL;

	if (argc > 2){
		fprintf(stderr, "Error, needs one or no arguments\n");
		return isRunning;
	}
	if (argc == 2){
		filename = argv[1];
	}
	
	//dataList.file = filename;
	//dataList.head = h

	printf("Current config file is: %s\n" ,filename);
	//loadTasks(dataList);
	displayTasks(filename);	
	isRunning = 0;
	return isRunning;
}
