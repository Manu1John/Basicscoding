/*
 ============================================================================
 Name        : FWAWR14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int simpleinterest(int,float,float);
int main(void) {
	int P;
	float R,n,f;
	setbuf(stdout,NULL);
	printf("Enter principle amount");
	scanf("%d",&P);
	printf("Enter interest rate");
	scanf("%f",&R);
	printf("Enter time/period");
	scanf("%f",&n);
	f=simpleinterest(P,R,n);
	printf("Simple interest is: %f",f);
	return EXIT_SUCCESS;
}
int simpleinterest(int a,float i,float y){
	float S;
	S=(a*i*y/100);
	return S;
}
