/*
 ============================================================================
 Name        : FWAWOR.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getArray(int);
void displayArray();
int main(void) {
	setbuf(stdout,NULL);
	int K;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&K);
	getArray(K);
	displayArray();
	return EXIT_SUCCESS;
}
void getArray(int L)
{
	int i,v[100];
	setbuf(stdout,NULL);
	printf("Enter Values\n");
	for(i=0;i<L;i++)
	{
		scanf("%d",&v[i]);
	}

}
	void displayArray()
	{
		int i,v[100],L;
		setbuf(stdout,NULL);
		printf("Values of Array\n");
		for (i=0;i<L;i++)
		{
			printf("%d\t",v[i]);
		}
	}

