/*
todo will be able to operate on a list of tasks
such tasks can be added, deleted, and completed.

optional timestamp for running tasks
optional project/tag sorting


functions:
	display tasks
		open file
		read and print tasks
	add task
		open file
		append new task to end
	delete task
		open file
		find and remove specified task
	complete task
		open file
		find and modify task contents
	reset task
		same as complete
	tag task
		???
	sort tasks
		open file
		sort tasks by desired attribute
	sub task
		no clue how to implement
		idea for tagging?
	
todo:
	learn file io
	implement data scheme
		name:status

general flow:
	open task file
	parse and display tasks


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


//Function Declarations
void openFile(char *fileName) {
	FILE *fp;
	fp = fopen( fileName, "w+" );
	fprintf( fp, "This is a test.\n");
	fclose(fp);
}


void displayTasks(char *fileName) {
	FILE *fp;
	char buff[255];
	char *token;

	fp = fopen(fileName, "r");
	while (fgets(buff, 255, (FILE*)fp)){
		/* get the first token*/
		printf( "This is the buffer: '%s'\n", buff);
		token = strtok(buff, ";");
		while (token != NULL) {
			printf( "This is a param: '%s'\n", token );
			token = strtok(NULL, ";");
		}
	}
}

void loadTasks( struct task *head, char *fileName)  {
	
	//XXXX load tasks from file and build linked list
}


struct task{
	char name[50];
	int status;
	struct task *next;
};




int main(int argc, char *argv[]) {
	int isRunning = 1;
	char *filename;
	filename = "todolist";
	struct task *head = NULL

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
