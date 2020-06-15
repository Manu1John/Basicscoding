/*
 ============================================================================
 Name        : FWAWR19.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int odd(int);
int main(void) {
	int L,add;
	setbuf(stdout,NULL);
	printf("Enter a Limit");
	scanf("%d",&L);
	add=odd(L);
	printf("Sum of Odd numbers: %d",add);
	return EXIT_SUCCESS;
}
int odd(int h)
{
	int sum=0,j;
	for(j=0;j<h;j++)
	{
		if(j%2==1)
		{
			printf("%d\n",j);
			sum=sum+j;
		}
	}
	return sum;
}
