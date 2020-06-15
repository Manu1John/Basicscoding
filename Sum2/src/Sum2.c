/*
 ============================================================================
 Name        : Sum2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1;
	float n2,sum;
	 setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%f",&n1,&n2);

	sum=n1+n2;
	printf("Sum is :%f",sum);
	return EXIT_SUCCESS;
}
