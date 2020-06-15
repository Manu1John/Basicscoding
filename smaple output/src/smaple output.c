/*
 ============================================================================
 Name        : smaple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	 setbuf(stdout,NULL);
	printf("Enter a numbers");
	scanf("%d",&n);
	printf("You Have entered :%d",n);
	return EXIT_SUCCESS;
}
