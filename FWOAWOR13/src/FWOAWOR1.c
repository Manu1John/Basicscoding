/*
 ============================================================================
 Name        : FWOAWOR1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}
void sum(){
	int a;
	float b,sum;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%f",&a,&b);
	sum=a+b;
	printf("sum is: %f",sum);
}
