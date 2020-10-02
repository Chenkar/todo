#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "taskFunctions.h"


void openFile(char *fileName){
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

