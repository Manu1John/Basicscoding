/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,A;
	 setbuf(stdout,NULL);
printf("Enter 3 numbers");
scanf("%f%f%f",&a,&b,&c);
A=(a+b+c)/3;
printf("Average is :%f",A);
	return EXIT_SUCCESS;
}
