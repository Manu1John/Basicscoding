/*
 ============================================================================
 Name        : FWORWR.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float average();
int main(void) {
	float d;
d=average();
printf("Average is:%f",d);
	return EXIT_SUCCESS;
}

float average(){
	float a,b,c,result;
	setbuf(stdout,NULL);
	printf("Enter 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
	result=(a+b+c)/3;
	return result;
}
