#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int year ;
	printf("년도를 입력하세요. : ");
	scanf("%d",&year);
	if(year % 400 == 0){
		printf("%d 년은 윤년입니다.", year);
	}else if(year % 4 == 0){
		if(year % 100 != 0)
			printf("%d 년은 윤년입니다. ", year);
	
	
	}	
}


