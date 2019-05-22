#include<stdio.h>
void main(){
	int a;	
	while(1){
		scanf("%d", &a);
		a = a / 10;
		switch(a){
			case 10: puts("A"); break;
			case 9: puts("A"); break;
			case 8: puts("B"); break;
			case 7: puts("C"); break;
			case 6: puts("D"); break;
			default: puts("F");
		}
	}
}
