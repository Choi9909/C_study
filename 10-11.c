#include<stdio.h>

void gugu(int dan)
{
	for(int i = 1; i < 10; i++){
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}

void main()
{
	int dan;
	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &dan);

	gugu(dan);
}
