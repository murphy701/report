#include<stdio.h>
void main(){
	int a;
	
	printf("수를 입력하시오");
	scanf("%d", &a);
	
	while(1)
	{
		if(a>0)
		printf("양수\n");
		
		else if(a == 0)
		printf("0\n");
		
		else
		printf("음수\n");
	}
}
