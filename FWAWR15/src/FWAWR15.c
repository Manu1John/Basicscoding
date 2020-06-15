/*
 ============================================================================
 Name        : FWAWR15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int result(float);
int main(void) {
	int e;
	float mark;
	setbuf(stdout,NULL);
printf("Enter your mark");
scanf("%f",&mark);
e=result(mark);
	return EXIT_SUCCESS;
}
int result(float point){
	int g;
	if(point>=50)
	{
		printf("Winner winner chicken dinner");
	}
	else
	{
		printf("lobby");
	}
	return g;
}
