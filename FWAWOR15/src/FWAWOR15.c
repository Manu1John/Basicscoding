/*
 ============================================================================
 Name        : FWAWOR15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void result(float);
int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your mark;");
	scanf("%f",&mark);
	result(mark);
	return EXIT_SUCCESS;
}
void result(float point){
	if(point>=50)
	{
		printf("You are passed");

	}
	else
	{
		printf("You are failed");
	}
}
