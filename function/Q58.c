//  Functions  1.
#include<stdio.h>
int a,b,c;
void add();
int main(){
  printf("Enter first value : ");
  scanf("%d",&a);
   printf("Enter Second value : ");
  scanf("%d",&b);
  add();

			return 0;
}
void add(){
    c=a+b;
    printf("Sum of %d and %d= %d ",a,b,c);
}

