#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a,b,result;
	char c;

	printf("첫 번째 계산할 값 => ");
	scanf("%d", &a);
	printf("+ - * / => ");
	scanf("%c", &c);
	printf("두 번째 계산할 값 => ");
	scanf("%d", &b);

	if(c=='+'){
	result = a + b;
	printf("%d + %d = %d ",a, b, result);
		}else if(c=='-'){
			result = a - b;
			printf("%d - %d = %d ", a, b, result);
		}else if(c=='*'){
		result = a * b;
		printf("%d * %d = %d ", a, b, result);
		}else if(c=='/'){
		result = a / b;
		printf("%d / %d = %d ", a, b, result);
		}else if(b==0){
		printf("0으로 나누면 안됩니다.\n");
		}
}
