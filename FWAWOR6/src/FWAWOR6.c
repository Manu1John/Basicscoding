/*
 ============================================================================
 Name        : FWAWOR6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void odd(int);
int main(void) {
	int L;
	setbuf(stdout,NULL);
printf("enter  a limit");
scanf("%d",&L);
odd(L);
	return EXIT_SUCCESS;
}
void odd(int b){
	int j;
	for(j=0;j<b;j++){
		if(j%2==1){
			printf("%d/n",j);
		}
	}
}
