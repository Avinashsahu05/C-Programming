//  functions  2.

#include<stdio.h>
int fact(int n);
int main(){
	int n;
  printf("Enter value of n : ");
  scanf("%d",&n);
   
  int factorial=fact(n);
  printf("Factorial is : %d ",factorial);

			return 0;
}
int fact(int n){
    int f=1;
    while(n>1){
    	f=f*n;
    	n--;
	}
	return f;
}
