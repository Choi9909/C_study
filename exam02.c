#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a,b,c;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
	scanf("%d", &b);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);
	if(b==1){
		result = a + c;
		printf("%d + %d =%d ",a ,c, result);
	}else if(b==2){
		result = a - c;
		printf("%d - %d =%d",a ,c ,result);
	}else if(b==3){
		result = a * c;
		printf("%d * %d =%d",a ,c ,result);
	}else if(b==4){
		result = a / c;
		printf("%d / %d =%d",a ,c ,result);
	}else{
		printf("1~4의 숫자를 입력해주세요 다시 입력해주세요 ");
	}
}

