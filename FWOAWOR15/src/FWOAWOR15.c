/*
 ============================================================================
 Name        : FWOAWOR15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void result();
int main(void) {
result();
	return EXIT_SUCCESS;
}
void result(){
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your mark");
	scanf("%f",&mark);
	if (mark>=50)
	{
		printf("You are passed");
	}
	else{
		printf("You are failed");
	}
}
