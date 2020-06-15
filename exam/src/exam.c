/*
 ============================================================================
 Name        : exam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	 setbuf(stdout,NULL);
	printf("Enter your mark");
	scanf("%f",&mark);
	if(mark>=50){
		printf("You are passed");
	}else{
		printf("You are faild");
	}
	return EXIT_SUCCESS;
}
