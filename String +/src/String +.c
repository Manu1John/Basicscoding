/*
 ============================================================================
 Name        : String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char Name[100];
	setbuf(stdout,NULL);

printf("Enter a Name");
gets(Name);
printf("Entered Name is :%s",Name);
	return EXIT_SUCCESS;
}
