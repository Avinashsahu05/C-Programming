#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter the three no. : ");
	scanf("%d %d %d",&a,&b,&c);
	a=a>b?a : b;
	a=a>c?a: c;
	printf(" The greatyer no. is %d",a);
	return 0;
}
