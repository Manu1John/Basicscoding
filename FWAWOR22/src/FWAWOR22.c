/*
 ============================================================================
 Name        : FWAWOR22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void desending(int);
int main(void) {
	int L;
	setbuf(stdout,NULL);
	printf("Enter array limit");
	scanf("%d",&L);
	desending(L);
	return EXIT_SUCCESS;
}
void desending(int K)
{
	int i,j,temp,a[100];
printf("Enter values of array");
for(i=0;i<K;i++)
{
	scanf("%d",&a[i]);
}
printf("Sorted values are \n");
for(i=0;i<K-1;i++)
{
	for(j=i+1;j<K;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<K;i++)
{
	printf("%d\n",a[i]);
}
}
