/*
 ============================================================================
 Name        : evenSum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,p,sum=0;
	 setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&l);
for(p=0;p<=l;p++){
	if(p%2==0){
		printf("%d\n",p);
		sum=sum+p;

	}
}
printf("Sum of Even numbers %d",sum);

	return EXIT_SUCCESS;
}
