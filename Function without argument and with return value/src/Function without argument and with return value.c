/*
 ============================================================================
 Name        : Function.c
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
	int f;
	setbuf(stdout,NULL);
	f=sum();
	printf("Sum is :%d",f);
	return EXIT_SUCCESS;
}
int sum(){
	int a,b,c;
	printf("Enter 2 numbers");
		scanf("%d%d",&a,&b);
	c=a+b;
}
