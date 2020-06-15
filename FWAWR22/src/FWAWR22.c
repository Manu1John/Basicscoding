/*
 ============================================================================
 Name        : FWAWR22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int desending(int L);
int main(void) {
	int f,L;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);
	f=desending(L);
	return EXIT_SUCCESS;
}
int desending(int K){
	int i,j,v[100],temp,h;
	printf("Enter values of array");
	for(i=0;i<K;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<K-1;i++){
		for(j=i+1;j<K;j++){
			if(v[i]<v[j]){
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;


			}
		}
	}
	printf("Sorted values are \n");
	for(i=0;i<K;i++){
		printf("%d\n",v[i]);

	}
	return h;
}
