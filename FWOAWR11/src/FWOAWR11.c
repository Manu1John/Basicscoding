/*
 ============================================================================
 Name        : FWOAWR11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sort();
int main(void) {
	int v;
v=sort();
	return EXIT_SUCCESS;
}
int sort(){
	int i,j,a[100],temp,L;
	setbuf(stdout,NULL);
	printf("Enter a Limit");
	scanf("%d",&L);
	printf("Enter values");
	for(i=0;i<L;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<L-1;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted values are \n");
	for(i=0;i<L;i++)
	{
		printf("%d",a[i]);
	}
	return i;
}
