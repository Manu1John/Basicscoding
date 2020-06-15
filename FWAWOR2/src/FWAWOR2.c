/*
 ============================================================================
 Name        : FWAWOR2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void negative(int);
int main(void) {
	int num;
	setbuf(stdout,NULL);
printf("Enter a number");
scanf("%d",&num);
negative(num);
	return EXIT_SUCCESS;
}
void negative(int a){
	if(a<0){
		printf("Negative Number");
	}else{
		printf("Positive number");
	}
}
