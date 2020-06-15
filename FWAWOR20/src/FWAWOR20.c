/*
 ============================================================================
 Name        : FWAWOR20.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void arraytwo(int);
int main(void) {
int L;
setbuf(stdout,NULL);
printf("Enter a limit ");
scanf("%d",&L);
arraytwo(L);
	return EXIT_SUCCESS;
}
void arraytwo(int k){
	int i,a[100],b[100],temp;
	printf("Enter values of array 1");
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter values of array 2");
	for(i=0;i<k;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<k;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("Swapped values of array 1 \n");
	for(i=0;i<k;i++){
		printf("%d\t",a[i]);
	}
	printf("Swapping after array 2 \t");
	for(i=0;i<k;i++){
		printf("%d\t",b[i]);
	}
}

