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
	char L=10,i,name;
	setbuf(stdout,NULL);
printf("Enter names");
	for(i=0;i<L;i++){
		scanf("%s",name);
	}
	printf("Entered names are \n");
	printf("%s",name);
	return EXIT_SUCCESS;
}
