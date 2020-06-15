/*
 ============================================================================
 Name        : char.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	 setbuf(stdout,NULL);
	printf("Enter a name");
	scanf("%c",&a);
	printf("You have entered : %c",a);
	return EXIT_SUCCESS;
}
