/*
 ============================================================================
 Name        : lab_1_lec3.c
 Author      : ahmed elaskary
 Version     :
 Copyright   : Your copyright notice
 Description : print two for loops
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i , j;

	for (j=-1 ; j<=9 ; j++)

	{
		for (i=0 ; i<=9 ; i++)

		{
			if (i == j || i<j )
			{
				continue ;
			}
			printf("%d ",i);
		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
