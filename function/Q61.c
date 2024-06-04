#include<stdio.h>
int reverse(int n);
int main(){
	int n,temp;
  printf("Enter value of n : ");
  scanf("%d",&n);
  temp=n;
   int palindrome=reverse(n);
  if(palindrome==temp){
  	printf("Palindrome no. ");
  }
  else{
  	printf("not palindrome no.");
  }

			return 0;
}
int reverse(int n){
  int r,sum=0;
  while(n!=0){
  	r=n%10;
  	sum=sum*10+r;
  	n=n/10;
  }
    
	return sum;
}
