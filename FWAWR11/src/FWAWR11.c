/*
 ============================================================================
 Name        : FWAWR11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sort(int);
int main(void) {
	int L,g;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
g=sort(L);

	return EXIT_SUCCESS;
}
int sort(int K ){
	int temp,i,n[100],j;
	printf("enter values");
	for(i=0;i<K;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<K-1;i++)
	{
		for(j=i+1;j<K;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
		printf("Sorted values are \n");
		for(i=0;i<K;i++)
		{
			printf("%d\t",n[i]);
		}

	}
	return i;

}
