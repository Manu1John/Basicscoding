/*
 ============================================================================
 Name        : 2Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],b[100],L,i,temp;
	setbuf(stdout,NULL);
printf("Enter array Limit");
scanf("%d",&L);
printf("Enter values of first array");
for(i=0;i<L;i++){
	scanf("%d",&a[i]);
}
printf("Enter values of second Array");
for(i=0;i<L;i++){
scanf("%d",&b[i]);
}printf("Swapping before array1 \n");
for(i=0;i<L;i++){
	printf("%d\t",a[i]);
}printf("\n");
printf("Swapping before array2 \n");
for(i=0;i<L;i++){
	printf("%d\t",b[i]);
}
for(i=0;i<L;i++){
	temp=a[i];
	a[i]=b[i];
	b[i]=temp;
}printf("\n");
printf("Swapping after array 1 \n");
for(i=0;i<L;i++){
	printf("%d\t",a[i]);
}printf("\n");
printf("Swapping after array 2 \n");
for(i=0;i<L;i++){
	printf("%d\t",b[i]);
}
	return EXIT_SUCCESS;
}
