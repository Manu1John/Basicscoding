/*
 ============================================================================
 Name        : FWOAWOR14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void simple();
int main(void) {
	simple();
	return EXIT_SUCCESS;
}
void simple(){
	int P;
	float R,n,SI;
	setbuf(stdout,NULL);

	printf("Enter Principle amount");
	scanf("%d",&P);
	printf("Enter interest rate");
	scanf("%f",&R);
	printf("Enter time/year");
	scanf("%f",&n);
	SI=(P*R*n/100);
	printf("Simple interest is: %f",SI);
}
