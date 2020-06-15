/*
 ============================================================================
 Name        : FWOAWR14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float c;
c=simple();
printf("Simple interest is: %f",c);
	return EXIT_SUCCESS;
}
int simple(){
	int P;
	float R,n,SI;
	setbuf(stdout,NULL);
	printf("Enter Principle amount");
	scanf("%d",&P);
	printf("Enter interest rate");
	scanf("%f",&R);
	printf("Enter Year/time");
	scanf("%f",&n);
	SI=(P*R*n/100);
	return SI;
}
