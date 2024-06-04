// functions 3.

#include<stdio.h>
int prime(int n,int f);
int main(){
	int n,f=0;
  printf("Enter value of n : ");
  scanf("%d",&n);
   int h=prime(n,f);
  if(h==1){
  	printf("Not prime no. ");
  }
  else{
  	printf("Prime no.");
  }

			return 0;
}
int prime(int n,int f){
    int i;
    for(i=2;i<=(n/2);i++){
    	if(n%i==0){
    		f=1;
    		break;
		}
	}
    
	return f;
}
