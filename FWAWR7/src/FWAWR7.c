/*
 ============================================================================
 Name        : FWAWR7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int opposit(int);
int main(void) {
	int h=0,i;
	i=opposit(h);

	return EXIT_SUCCESS;
}
int opposit(int L){
	int i,j,p;
	for(i=10;i>L;i--){
		for(j=0;j<i;j++){
			printf(" *");
		}
		printf("\n");
	}return i;
}
