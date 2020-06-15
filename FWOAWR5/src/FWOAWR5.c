/*
 ============================================================================
 Name        : FWOAWR5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int option();
int main(void) {
	int f;
	f=option();
	switch(f){
	case 1:
		printf("you ahve selected porotta");
		break;
	case 2:
		printf("you have selected chappatthi");
		break;
	case 3:
		printf("you have selected manthi");
		break;
	case 4:
		printf("you have selected biriyani ");
		break;
	default:
		printf("Get out");
	}
	return EXIT_SUCCESS;
}
int option(){
	int c;
	setbuf(stdout,NULL);
	printf("1 for porrotta \n2 for chappathi \n3 for manthi \n4 for biriyani \n Enter your choice");
	scanf("%d",&c);
	return c;
}
