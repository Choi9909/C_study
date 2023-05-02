#include<stdio.h>

void main()
{
	int aa[4];
	int hap;

	printf("1번쨰 숫자를 입력하세요 : ");
	scanf("%d", &aa[0]);

	printf("2번쨰 숫자를 입력하세요 : ");
	scanf("%d", &aa[1]);
	
	printf("3번쨰 숫자를 입력하세요 : ");
	scanf("%d", &aa[2]);
	printf("4번쨰 숫자를 입력하세요 : ");
	scanf("%d", &aa[3]);

	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf(" 합계 ==> %d \n ", hap);
}
