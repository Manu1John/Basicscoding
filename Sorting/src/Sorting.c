/*
 ============================================================================
 Name        : Sorting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int j,i,V[100],L,temp;
	setbuf(stdout,NULL);
printf("Enter array limit");
scanf("%d",&L);
printf("Enter values");
for(i=0;i<L;i++){
scanf("%d",&V[i]);

}
for(i=0;i<=L-1;i++){
	for(j=0;j<L;j++){
		if(V[i]>V[j]){
			temp=V[i];
			V[i]=V[j];
			V[j]=temp;
		}
	}

}
printf("Sorted values are\t");
for(i=0;i<L;i++){
	printf("%d\t",V[i]);
}
	return EXIT_SUCCESS;
}
