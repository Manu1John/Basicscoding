/*
 ============================================================================
 Name        : FWAWOR19.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void even();
int main(void) {
	int L;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);
	even(L);
	return EXIT_SUCCESS;
}
void even(int K){
	int p,sum=0;
	for(p=0;p<=K;p++){
		if(p%2==0){
			printf("%d\n",p);
			sum=sum+p;
		}
	}
	printf("sum of odd number: %d",sum);
}
