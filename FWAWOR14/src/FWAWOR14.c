/*
 ============================================================================
 Name        : FWAWOR14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void simple(int,float,float);
int main(void) {
	int P;
	float n,R;
	setbuf(stdout,NULL);
	printf("Enter Principle amount");
	scanf("%d",&P);
	printf("Enter time/period");
	scanf("%f",&n);
	printf("Enter interest rate");
	scanf("%f",&R);
	simple(P,n,R);
	return EXIT_SUCCESS;
}
void simple(int a,float i,float y){
	float s;
	s=(a*i*y/100);
	printf("Simple interest is: %f",s);
}
