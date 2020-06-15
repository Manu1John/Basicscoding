/*
 ============================================================================
 Name        : FWOWOR1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void average();
int main(void) {
average();
	return EXIT_SUCCESS;
}
void average(){
	float a,b,c,average;
	setbuf(stdout,NULL);
	printf("Enter 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
	average=
			(a+b+c)/3;
	printf("Average is:%f",average);
}
