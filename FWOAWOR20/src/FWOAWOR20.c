/*
 ============================================================================
 Name        : FWOAWOR20.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void twoarray();
int main(void) {
	twoarray();
	return EXIT_SUCCESS;
}
void twoarray()
{
	int L,i,j,a[100],b[100],temp;
	setbuf(stdout,NULL);
	printf("enter a Limit");
	scanf("%d",&L);
	printf("Enter values of array 1");
	for(i=0;i<L;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter values of array 2");
	for(j=0;j<L;j++)
	{
		scanf("%d\t",&b[j]);
	}
for(i=0;i<L;i++)
{
	for(j=0;j<L;j++)
	{
		temp=a[i];
			a[i]=b[j];
			b[j]=temp;
}


	}
printf("Values of array 1\n");
for(i=0;i<L;i++)
{
	printf("%d\t",a[i]);
}
printf("values of array 2\t");
for(j=0;j<L;j++)
{
	printf("%d\t",b[j]);
}
}
