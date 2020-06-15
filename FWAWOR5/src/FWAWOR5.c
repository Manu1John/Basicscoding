/*
 ============================================================================
 Name        : FWAWOR5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void option(int);
int main(void) {
	int c;
	setbuf(stdout,NULL);
	printf("1 for porotta \n2 for chappahi \n3 for manthi \n4 for biriyani \n Enter your Choice");
	scanf("%d",&c);
	option(c);
	return EXIT_SUCCESS;
}
void option(int h){
switch(h){
case 1:
	printf("You have selected porotta");
	break;
case 2:
	printf("you have selected chappathi");
	break;
case 3:
	printf("you have selected manthi");
	break;
case 4:
	printf("You have selected biriyani");
	break;
default :
	printf("idiot");

}
}
