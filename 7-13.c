#include<stdio.h>
void main()
{
	int a,b,c,hap;
	
	printf("�հ��� ���۰� ==> ");
	scanf("%d", &a);
	printf("�հ��� ���� ==> ");
	scanf("%d", &b);
	printf("��� ==> ");
	scanf("%d", &c);

	for(int i= a ; i <= b ; i++)
	{
		if(i % c != 0)
			continue;
		hap+=i;
	}
	printf("%d���� %d������ %d����� �հ� ==> %d\n",a, b, c, hap);
}	


	


