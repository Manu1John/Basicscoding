/*
 ============================================================================
 Name        : FWOAWOR.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void pattern();
int main(void) {
	pattern();
	return EXIT_SUCCESS;
}
void pattern(){
	int L,i,j;
	setbuf(stdout,NULL);
	printf("Enter a Limit");
	scanf("%d",&L);
	for(i=1;i<=L;i++){
		for(j=0;j<i;j++){
			printf(" *");
		}
		printf("\n");
	}
}
