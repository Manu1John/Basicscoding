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
	int L,i,sum=0;
	 setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);
	for(i=1;i<L;i++){
		if(i%2==1){
		printf("%d\n",i);
		sum=sum+i;
		}
	}
	printf("Sum of odd numbers %d\n",sum);

	return EXIT_SUCCESS;
}
