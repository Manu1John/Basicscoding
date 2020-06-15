/*
 ============================================================================
 Name        : Larger.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1,n2;
	 setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&n1,&n2);
	if(n1>n2){
		printf("Greatest number is :%d",n1);
	}else{
		printf("GReatest number is : %d",n2);
	}
	return EXIT_SUCCESS;
}
