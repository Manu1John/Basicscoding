/*
 ============================================================================
 Name        : FWOAWOR24.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getarray();
void displayarray();
int main(void) {

getarray();
displayarray();
	return EXIT_SUCCESS;
}

void getarray(){
	int a[100],i,L;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);

	printf("Enter values of array");
	for(i=0;i<L;i++){
	scanf("%d",&a[i]);
	}

}
void displayarray(){
	int i,L,a[100];
	setbuf(stdout,NULL);
printf("Values of array \n");
for(i=0;i<L;i++){
	printf("%d\t",a[i]);
}


}
