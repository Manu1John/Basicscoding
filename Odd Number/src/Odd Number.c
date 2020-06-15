/*
 ============================================================================
 Name        : Odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int k,L;
	 setbuf(stdout,NULL);
printf("Enter a lIMIT");
scanf("%d",&L);
for(k=0;k<=L;k++){
	if(k%2==1){
		printf("%d \n",k);
	}
}
	return EXIT_SUCCESS;
}
