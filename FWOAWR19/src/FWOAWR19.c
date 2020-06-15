/*
 ============================================================================
 Name        : FWOAWR19.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int even();
int main(void) {
int c;
c=even();
printf("Sum of even numbers %d",c);
	return EXIT_SUCCESS;
}
int even(){
	int sum=0,s,L;
	setbuf(stdout,NULL);
	printf("Enter a Limit");
	scanf("%d",&L);
	for(s=0;s<=L;s++){
		if(s%2==0){
			printf("%d\n",s);
			sum=sum+s;

		}
	}
	return sum;
}
