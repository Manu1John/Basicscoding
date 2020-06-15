/*
 ============================================================================
 Name        : Simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	 setbuf(stdout,NULL);
printf("Enter Principle amount");
	scanf("%d",&P);
	printf("Enter interest rate");
	scanf("%f",&R);


printf("Enter no. of years");
scanf("%f",&n);
SI=(P*R*n)/100;
printf("Simple Interest is :%f",SI);

	return EXIT_SUCCESS;
}
