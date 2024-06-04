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
	  /*
	  int n,a=0,b=1,c,i;
   	printf("Enter the fibonacci no.: ");
   	scanf("%d",&n);
   for(i=1;i<=n;i++){
   	printf("%d  ",a);
   	  c=a+b;
   	  a=b;
   	  b=c;
	   }
	   */
	   
   	
   //16.
   
  /* int n;
   int i=1;
   printf("Enter the factorial no. ");
   scanf("%d",&n);
   while(n>=1){
   	i=i*n;
   	n--;
   }
   printf("%d",i);
   */
   
   //  17.
   
  /* int i;
   int sum=0;
   for(i=1;i<=10;i++){
   	sum=sum+i;
   }
   printf("%d",sum);
   */
   
   //  18.
   
 /*  int n,r;
   printf("enter the number : ");
   scanf("%d",&n);
   while(n>0){
   	r=n%10;
   	printf("%d",r);
   	n=n/10;
   } 
   */
   
//  19.

   /* int n,r,temp,sum;
   printf("enter the number : ");
   scanf("%d",&n);
   temp=n;
   while(n>0){
   	r=n%10;
   	sum=sum*10+r;
   	n=n/10;
   } 
   printf("%d\n",sum);
   
   if(sum==temp){
   	printf("Palidrome no.");
   }
   else{
       printf("not a palidrome no."); }
       */
       
       //  20.
       
       /*
	    int n,r,temp,sum;
   printf("enter the number : ");
   scanf("%d",&n);
   temp=n;
   while(n>0){
   	r=n%10;
   	sum=sum+r*r*r;
   	n=n/10;
   } 
   printf("%d\n",sum);
   
   if(sum==temp){
   	printf("Armstrong no.");
   }
   else{
       printf("not a armstrong no."); }
       
  */
  
//  21.
  
     /* int n,r,temp,sum;
   printf("enter the number : ");
   scanf("%d",&n);
   temp=n;
   while(n>0){
   	r=n%10;
   	sum=sum*10+r;
   	n=n/10;
   } 
   
   int s;
   while(sum>0){
   	s=sum%10;
   	printf("%d\n",s);
   	sum=sum/10;
   	
   } */
   
   // SIG diff. design of loop
   /*
   int i,j;
   for(i=1;i<=5;i++){
   	for(j=5;j>=i;j--){
   		printf("%d",i);
	   }
	   printf("\n");
	   }
       */
   
    // to print:
     /*             54321
                    5432
                    543
                    54
                    5   */

  /*     int i,j;
   for(i=1;i<=5;i++){
   	for(j=5;j>=i;j--){
   		printf("%d",j);
	   }
	   printf("\n");
	   }
   */
   
   // to print: 
   /*            55555
                 4444
                 333
                 22
                 1  */
                 
/*	int i,j;
   for(i=5;i>=1;i--){
   	for(j=1;j<=i;j++){
   		printf("%d",i);
	   }
	   printf("\n");
	   }
	   */
	   
	   
	// to print:
/*              A
                AB
				ABC
				ABCD
				ABCDE   */ 
	/*   int i,j;
   for(i='A';i<='E';i++){
   	for(j='A';j<=i;j++){
   		printf("%c",j);
	   }
	   printf("\n");
	   }  */
	   
	   
//     to print: 
  /*            A         E            E
                BB        ED           DD
                CCC       EDC          CCC
                DDDD      EDCB         BBBB
                EEEEE     EDCBA        AAAAA
                */
                
  //  1  
     /*int i,j;
     for(i=65;i<=69;i++){
   	 for(j=65;j<=i;j++){
   		printf("%c",i);
	   }
	   printf("\n");
	   }  */
	   
	   int i,n,f=0;
	   printf("Enter prime no.");
	   scanf("%d",&n);
	   for(i=2;i=n/2;i++){
	   	if(n%i==0){
	   		f=1;
	   		break;
		   }
	   }
	   if(f==1){
	   	printf("Non prime no.");
	   }
	   else{
	   	printf("prime no.");
	   }
     
	return 0;
}
