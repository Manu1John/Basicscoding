/*
 ============================================================================
 Name        : PrimeNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,d,flag=0;
	 setbuf(stdout,NULL);
printf("Enter a number");
	scanf("%d",&num);
	for(d=0;d<num%2;d++){
		if(num%d==0){
			flag=1;
			break;
		}
		if(flag==0){
			printf("Prime number");

		}else{
			printf("Not Prime");
		}
	}

	return EXIT_SUCCESS;
}
