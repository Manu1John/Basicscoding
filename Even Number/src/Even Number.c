/*
 ============================================================================
 Name        : Even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int L,i;
	 setbuf(stdout,NULL);
printf("Enter a Limit");
scanf("%d",&L);
for(i=0;i<=L;i++){
	if(i%2==0){
		printf("%d \n",i);
	}
}
	return EXIT_SUCCESS;
}
