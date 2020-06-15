/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int L,j,i;
	 setbuf(stdout,NULL);
printf("Enter a Limit");
scanf("%d",&L);
for(i=1;i<=L;i++){
	for(j=0;j<i;j++){
		printf(" *");
	}
printf("\n");
}
	return EXIT_SUCCESS;
}
