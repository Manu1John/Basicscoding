/*
 ============================================================================
 Name        : Pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int L=0,i,j;
	 setbuf(stdout,NULL);
	for(i=10;i>=L;i--){
		for(j=0;j<i;j++){
			printf(" *");
		}

	printf("\n");
	}
	return EXIT_SUCCESS;
}
