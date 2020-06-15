/*
 ============================================================================
 Name        : FWAWR5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int option(int);
int main(void) {
	int c,z;
	setbuf(stdout,NULL);
	printf("1 for porrotta \n2 for chappathi \n3 for manthi \n4 for biriyani \n enter your choice");
	scanf("%d",&c);
	z=option(c);
	return EXIT_SUCCESS;
}
int option(int k){
	int x;
	switch(k){
	case 1:
		printf("You have selected porotta");
		break;
	case 2:
		printf("You have selected chappathi");
		break;
	case 3:
		printf("You have selected manthi");
		break;
	case 4:
		printf("you have selected biriyani");
		break;
	default:
		printf("Asshole");
	}
	return x;
}
