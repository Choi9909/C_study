#include<stdio.h>

void main()
{
	int i, k;
	for(i = 2 ; i < 10 ; i++)
		printf(" #��%d��# ",i);
	printf("\n");
	for(k=1 ; k < 10 ; k++){
		for(i = 2 ; i<10; i++){
			printf("%2d X %2d = %2d ", i,k,i*k);
		}printf("\n");
	}
}

