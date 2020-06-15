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
void option();
int main(void) {
option();
	return EXIT_SUCCESS;
}
void option(){
int C;
setbuf(stdout,NULL);
printf("1 for porotta \n2 for chappathi \n3 for manthi \n4 for biriyani \n Enter your choice");
	scanf("%d",&C);
switch(C){
case 1:
	printf("You have selected porrotta");
	break;
case 2:
	printf("You have selected chappathi");
	break;
case 3:
	printf("you have selected manthi");
	break;
case 4:
	printf("You have selected biriyani");
	break;
default:
	printf("Get lost");
}
}
