/*
 ============================================================================
 Name        : FWAWR23.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int twoarray(int);
int main(void) {
	int L,d;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
d=twoarray(L);
	return EXIT_SUCCESS;
}
int twoarray(int K)
{
	int M,i,j,a[10][10],b[10][10],sum=0;
	printf("Enter values of array 1\n");
	for(i=0;i<K;i++)
	{
		for(j=0;j<K;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of array 2\n");
	for(i=0;i<K;i++)
	{
		for(j=0;j<K;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Sum of two array is \n");
	for(i=0;i<K;i++)
	{
		for(j=0;j<K;j++)
		{
			sum=sum+a[i][j]+b[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}
	return M;
}
