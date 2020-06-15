/*
 ============================================================================
 Name        : FWOAWR.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int number();
int main(void) {
	int y;
y=	number();
	if(y>-1){
		printf("Positive number");

	}else{
		printf("Negative number");
	}
	return EXIT_SUCCESS;
}
int number(){
	int v;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&v);

	return v;
}
