/*
 ============================================================================
 Name        : FWAWR1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float average(float,float,float);
int main(void) {
	float a,b,c,d;
	setbuf(stdout,NULL);
printf("Enter 3 numbers");
scanf("%f%f%f",&a,&b,&c);
 d=average(a,b,c);
 printf("Average is :%f",d);
	return EXIT_SUCCESS;
}
float average(float n1,float n2, float n3){
	float average;
	average=(n1+n2+n3)/3;
	return average;
}
