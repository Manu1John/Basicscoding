/*
 ============================================================================
 Name        : FWOAWOR19.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void oddsum();
int main(void) {
oddsum();
	return EXIT_SUCCESS;
}
void oddsum()
{
	int L,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a LImit");
	scanf("%d",&L);
	printf("Odd numbers\n");
for(i=0;i<L;i++)
{
	if(i%2==1)
	{
		printf("%d\n",i);
		sum=sum+i;

	}
}
printf("Sum of odd number :%d",sum);
}
