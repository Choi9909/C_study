#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int year ;
	printf("�⵵�� �Է��ϼ���. : ");
	scanf("%d",&year);
	if(year % 400 == 0){
		printf("%d ���� �����Դϴ�.", year);
	}else if(year % 4 == 0){
		if(year % 100 != 0)
			printf("%d ���� �����Դϴ�. ", year);
	
	
	}	
}


