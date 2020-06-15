/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Choice;
	 setbuf(stdout,NULL);
printf("Enter a number");
scanf("%d",&Choice);
switch(Choice){
case 1:
	printf("Sunday");
	break;
case 2:
	printf("Monday");
	break;
case 3:
	printf("Tuesday");
	break;
case 4:
	printf("Wednesday");
	break;
case 5:
	printf("Thursday");
	break;
case 6:
	printf("Friday");
	break;
case 7:
	printf("Saturday");
	break;
default:
	printf("Invalid entry");

}
	return EXIT_SUCCESS;
}
