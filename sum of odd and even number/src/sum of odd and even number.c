/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int k,L,evenSum=0,oddSum=0;
	 setbuf(stdout,NULL);
printf("Enter a Limit");
scanf("%d",&L);
for(k=1;k<L;k++){
	if(k%2==0){
		printf("%d\n",k);
		evenSum=evenSum+k;
	}else{
		printf("%d\n",k);
		oddSum=oddSum+k;
	}
}
printf("Evensum %d\n",evenSum);
printf("Oddsum %d\n",oddSum);
	return EXIT_SUCCESS;
}
