/*
 ============================================================================
 Name        : FWAWOR1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void average(float,float,float);
int main(void) {
	float a,b,c;
	setbuf(stdout,NULL);
printf("Enter 3 numbers");
	scanf("%f%f%f",&a,&b,&c);
average(a,b,c);
	return EXIT_SUCCESS;
}
void average(float n1,float n2, float n3){
	float Average;
	Average=(n1+n2+n3)/3;
	printf("Average is %f",Average);
}
