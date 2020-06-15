/*
 ============================================================================
 Name        : FWAWR2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int number(int);
int main(void) {
	int a,h;
	setbuf(stdout,NULL);
printf("Enter a number");
scanf("%d",&a);
h=number(a);
if(a>-1){
	printf("Positive number");
}else{
	printf("Negative number");
}




	return EXIT_SUCCESS;
}
int number(int b){
	int g;
	return g;
}
