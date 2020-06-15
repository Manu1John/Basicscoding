/*
 ============================================================================
 Name        : FWOAWR13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	float g;
	g=sum();
	printf("Sum is: %f",g);
	return EXIT_SUCCESS;
}
int sum(){
	int n1;
	float n2,result;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%f",&n1,&n2);
	result=n1+n2;
	return result;
}
