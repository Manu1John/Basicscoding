/*
 ============================================================================
 Name        : FWOAWOR3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void larger();
int main(void) {
larger();
	return EXIT_SUCCESS;
}
void larger(){
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
	printf("Greatest Number is :%d",a);
	}else{
		printf("Negative number is :%d",b);

	}
}
