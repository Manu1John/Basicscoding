/*
 ============================================================================
 Name        : Even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


int main()
{
    int arr[100];
    int i,size,odd=0,even=0;
	setbuf(stdout,NULL);


    printf("Enter size of the array\n");
    scanf("%d",&size);


    printf("\nEnter elements of the array\n\n");
    for(i=0; i<size; i++)
    {
        printf("Enter the element arr[%d] :",i);
        scanf("%d",&arr[i]);
    }


    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("\nTotal even numbers of an array :%d\n",even);
     printf("Total odd numbers of an array :%d",odd);
     getch();
    return 0;
}

	return EXIT_SUCCESS;
}
