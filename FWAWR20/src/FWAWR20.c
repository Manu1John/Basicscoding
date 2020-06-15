/*
 ============================================================================
 Name        : FWAWR20.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int arraytwo(int);
int main(void) {
int L,m;
setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
m=arraytwo(L);
	return EXIT_SUCCESS;
}
int arraytwo(int h){
	int temp,j,a[100],b[100],f,i;
	printf("Enter values of array 1 ");
	for(j=0;j<h;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("Enter values of array 2 ");
	for(j=0;j<h;j++)
	{
		scanf("%d",&b[j]);
	}
	for(j=0;j<h;j++)
	{
		temp=a[j];
		a[j]=b[j];
		b[j]=temp;
	}
	printf("SWapped values of array 1\n");
	for(j=0;j<h;j++)
	{
		printf("%d\t",a[j]);

	}
	printf("Swapped values of array 2");
	for(j=0;j<h;j++)
	{
		printf("%d\t",b[j]);
	}
	for(j=0;j<h-1;j++)
	{
		for(i=0;i<h;i++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
		printf("Sorted values of array 1 \n");
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[j]);
		}
		for(j=0;j<h;j++)
		{
			for(i=0;i<h;i++)
			{
				if(b[i]<b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		printf("Sorted values of array 2\n");
	}
	for(j=0;j<h;j++)
	{
		printf("%d",&b[j]);
	}

	return f;
}
