/*
 ============================================================================
 Name        : FWAWR17.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int days(int);
int main(void) {
	int count,f;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&count);
	f=days(count);
	return EXIT_SUCCESS;
}
int days(int num){
	int g;
	switch(num)
	{
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
		printf("Invalid Entry");
	}
	return g;
}
