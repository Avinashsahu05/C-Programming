#include<stdio.h>
int main(){
	
//8. 
     /*int a,b,c;
	printf("enter the three no. : ");
	scanf("%d %d %d",&a,&b,&c);
	a=a>b?a : b;
	a=a>c?a: c;
	printf(" The greater no. is %d",a); */
	
	
	//9.  
	/*int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	if(n>0){
		printf("positive no.");
	}
	else if(n<0){
		printf("Negative no.");
	}
	else{
		printf("Neutral"); 
	} */
	
	//10.
   /*	int n;
	printf("Enter the year : ");
	scanf("%d",&n);
	if(n%400==0){
		printf("Leap year");
	}
	else if(n%100==0){
		printf("not a leap year");
	}
	else if(n%4==0){
		printf("Leap year");
	}
	else{
		printf("not aleap year");
	}
	*/
	
	//11.
	/*int n;
	printf("Enter the no b/w 0 to 9 : ");
	scanf("%d",&n);
	switch(n){
		case 1: printf("One");
		break;
		case 2: printf("Two");
		break;
		case 3: printf("Three");
		break;
		case 4: printf("Four");
		break;
		case 5: printf("Five");
		break;
		case 6: printf("Six");
		break;
		case 7: printf("Seven");
		break;
		case 8: printf("Eight");
		break;
		case 9: printf("Nine");
		break;
		default:
			printf("wrong no."); 
		
	}
	*/
	
	//12.
	/*char ch;
	printf("Enter the character from a to z: ");
	scanf("%d",&ch);
	switch(n){
		case a: printf("vowel");
		break;
		case e: printf("vowel");
		break;
		case i: printf("vowel");
		break;
		case o: printf("vowel");
		break;
		case u: printf("vowewl");
		break; */
		
//13.
    
    /*int i;
   for(i=1;i<=10;i++){
   	printf("AVINASH SAHU\n");
   }
	*/
	
//14.

   /*int i;
   
   for(i=1;i<=10;i++){
   	printf("%d  ",i);	
   }
   */
   
   /*int i;
   for(i=1;i<=10;i++);
   { printf("%d",2*i);
   } */
   
   /*int i;
   for(i=1;i<=10;i++){
   	printf("%d   ",i*i);
   }
   */
   
   /*int i;
   for(i=1;i<=10;i++){
   	printf("%d/%d   ",i,i*i);}
   	*/
   	
   	/*int i;
   for(i=1;i<=9;i++){
   	printf("%d/%d +  ",i,i*i);}
   	printf("%d/%d   ",i,i*i);
   	*/
   	
   	//15.
	   /*int n;
   	ptintf("Enter the fibonacci no.: ");
   	scanf("%d",&n);
   for(int i=2;i<=n;i++){
   	printf();}*/
   	
   //16.
   
   int n,j;
   int f=1;
   	printf("Enter the factorial no. : ");
   	scanf("%d",&n);
    for(int i=n;i>=1;i--){
   	j=f*i;}
   	printf("%d",j);
   
	return 0;
}
