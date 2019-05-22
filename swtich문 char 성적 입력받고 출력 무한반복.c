#include<stdio.h>
void main(){
	int a,b,c,d,e;
	FILE *fp;
	
	fp=fopen("c:\\my.txt", "r");
	fscanf(fp, "%d%d%d,", &a,&b,&c);
	fclose(fp);
	
	d=a+b+c;
	e=(a+b+c)/3;
	printf("%d\n",d);
	printf("%f\n",e);
}
