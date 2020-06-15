/*
 ============================================================================
 Name        : Basic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int C;
	float b,R,a;
	 setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%f%f",&a,&b);
	printf("1 for Addition \n2 for subtraction \n3 for Division \n4 for Multiplication \n Enter your Choice ");
	scanf("%d",&C);
switch(C){
case 1:
	R=a+b;
	printf("Result is :%f",R);
	break ;
case 2:
	R=a-b;
	printf("Result is :%f",R);
	break;
case 3:
	R=a/b;
	printf("Result is :%f",R);
	break;
case 4:
	R=a*b;
	printf("Result is:%f",R);
	break;
default:
	printf("You are fucked");

}
	return EXIT_SUCCESS;
}
