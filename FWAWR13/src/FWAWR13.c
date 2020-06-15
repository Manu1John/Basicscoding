/*
 ============================================================================
 Name        : FWAWR13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,float);
int main(void) {
	int n1;
	float n2,c;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%f",&n1,&n2);
	c=sum(n1,n2);
	printf("Sum is: %f",c);
	return EXIT_SUCCESS;
}
int sum(int a,float b){
	float result;
	result=a+b;
	return result;
}
