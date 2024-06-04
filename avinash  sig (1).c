#include<stdio.h>
int main(){
	/*	
  //  1.
printf("Avinash sahu\n \t IIST Indore \n \t \t Indore");*/
	
	/*
	//  2. 
	int f,d,e;
	printf("Enter the first value : ");
	scanf("%d",&f);
	printf("Enter the second value : ");
	scanf("%d",&d);
	e=f+d;
	printf("sum of %d and %d =%d",f,d,e);*/
	
	
    /*
    // 3. 
	int g,h,i,j,k;
	float a;
	printf("enter first subject no.  : ");
	scanf("%d",&g);
	printf("Enter second, third, fourth value : ");
	scanf("%d %d %d",&h,&i,&j);
	k=g+h+i+j+k;
	printf("total no. = %d \n",k);
	a=k/4.0;
	printf("total average = %f",a);*/
	
	/*
	// 4.
	char ch;
	printf("enter the character : ");
	scanf("%c",&ch);
	printf("The ASCII value of %c= %d ",ch,ch); */
	
	/*
	// 5. 
	int a=10,b=56,c;
	printf("Before swapping a=%d and b=%d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping a=%d and b=%d\n",a,b);*/
	
	/*
	//  5.
	int a=10,b=56,c;
	printf("Before swapping a=%d and b=%d \n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping a=%d and b=%d\n",a,b);*/
	
	/*
	// 6. 
	int a;
	printf("enter value : ");
	scanf("%d",&a);
	(a%2 == 0) ? printf("even no.") : printf("odd no.");*/
	
	/*
	
	// 7. 
	int a,b;
	printf("enter first and second value : ");
	scanf("%d %d",&a,&b);
	a>b? printf("%d is greater",a): printf("%d is greater",b);	
	
	
	
	*/
	
	
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
   
   
   // 22.
     /* int n,i,f=0;
     printf("Enter the prime no.");
     scanf("%d",&n);
     for(i=2;i<=n/2;i++){
     	if(n%i==0){
     		f=1;
     		break;
		 }
	 }
   if(f==1){
   	printf("Non Prime no.");
   }
   else{
   	printf("Prime no.");
   }
   */
   
   
   // 23  (1.)
   
   /*
   int i,j;
   for(i=1;i<=5;i++){
   	for(j=1;j<=i;j++){
   		printf("*");
	   }
	   printf("\n");
   }
   */
   
   //  (2.)
   
   /*
   int i,j;
   for(i=5;i>=5;i++){
   	for(j=1;j<=i;j++){
   		printf("*");
	   }
	   printf("\n");
   }
   */
   
   // (3.)
   
   /*
   int i,j;
     for(i=1;i<=5;i++){
         for(j=1;j<=i;j++){
             printf("%d",j);
         }
         printf("\n");
     }
*/
   
    // (4.)
    /*
    int i,j;
     for(i=1;i<=5;i++){
         for(j=1;j<=i;j++){
             printf("%d",i);
         }
         printf("\n");
     }
     */
     
     
     // (5.)
     /*
     int i,j;
     for(i=5;i>=1;i--){
         for(j=5;j>=i;j--){
             printf("%d",j);
         }
         printf("\n");
     }
     */
     
     
     // (6.)
     
    /*
	 int i,j;
     for(i=5;i>=1;i--){
         for(j=5;j>=i;j--){
             printf("%d",i);
         }
         printf("\n");
     }
     */
     
     // (7.)
     
     /*
     int i,j;
     for(i=5;i>=1;i--){
         for(j=1;j<=i;j++){
             printf("%d",j);
         }
         printf("\n");
     }
*/
// (8.)

/*
    int i,j;
     for(i=1;i<=5;i++){
         for(j=5;j>=i;j--){
             printf("%d",i);
         }
         printf("\n");
     }
     */
     
     // (9.)
     
    /*  int i,j;
     for(i=1;i<=5;i++){
         for(j=5;j>=i;j--){
             printf("%d",j);
         }
         printf("\n");
     }
   */
   
   // (10.)
   
    /* int i,j;
     for(i=5;i>=1;i--){
         for(j=1;j<=i;j++){
             printf("%d",i);
         }
         printf("\n");
     }
     */
     
     // (11.)
     
     /*
	 int i,j;
     for(i='A';i<='E';i++){
         for(j='A';j<=i;j++){
             printf("%c",j);
         }
         printf("\n");
     }
     */
   
   
   // (12.)
   
   /* int i,j;
     for(i='A';i<='E';i++){
         for(j='A';j<=i;j++){
             printf("%c",i);
         }
         printf("\n");
     }
     */
   
   // (13.)
   
   /*
   int i,j;
     for(i='E';i>='A';i--){
         for(j='E';j>=i;j--){
             printf("%c",j);
         }
         printf("\n");
     }
   */
   
   // (14.)
   /*
    int i,j;
     for(i='E';i>='A';i--){
         for(j='E';j>=i;j--){
             printf("%c",i);
         }
         printf("\n");
     }
   */
   
   // (15.)
   
   /*
   int i,j;
     for(i='E';i>='A';i--){
         for(j='A';j<=i;j++){
             printf("%c",j);
         }
         printf("\n");
     }
*/

// (16.)

/*
      int i,j;
     for(i='A';i<='E';i++){
         for(j='E';j>=i;j--){
             printf("%c",i);
         }
         printf("\n");
     }
*/

// (17.)

/*
   int i,j;
     for(i='A';i<='E';i++){
         for(j='E';j>=i;j--){
             printf("%c",j);
         }
         printf("\n");
     }
     */
     
    // (18.)
    
    /*
    int i,j;
     for(i='E';i>='A';i--){
         for(j='A';j<=i;j++){
             printf("%c",i);
         }
         printf("\n");
     }
     */
     
     // (19.)
     /*
     int i,j,k=1;
     for(i=1;i<=4;i++){
         for(j=1;j<=i;j++){
             printf("%d",k);
             k++;
         }
         printf("\n");
     }
     */
     
     // (20.)
     
     /*
     int i,j,k;
     for(i=1;i<=5;i++){
         for(j=5;j>i;j--){
             printf(" ");
             
         }
         for(k=1;k<=i;k++){
         	printf("*");
		 }
         printf("\n");
     }
     */
     
     // (21.)
     
     /*
      int i,j,k;
     for(i=1;i<=5;i++){
         for(j=5;j>i;j--){
             printf(" ");
             
         }
         for(k=1;k<=2*i-1;k++){
         	printf("*");
		 }
         printf("\n");
     }
     
     */
     
     // (22.)
     /*
     int i,j,k;
     for(i=1;i<=5;i++){
         for(j=5;j>i;j--){
             printf(" ");
             
         }
         for(k=1;k<=2*i-1;k++){
         	printf("*");
		 }
         printf("\n");
     }
     for(i=5;i>=1;i--){
     	for(j=5;j>i;j--){
     		printf(" ");
		 }
		 for(k=1;k<=2*i-1;k++){
		 	printf("*");
		 }
		 printf("\n");
	 }
	 */
	 
	 
	 // 24. 
	 /*
	 int a[10], i;
	 printf("Enter 10 values : \n");
	 for(i=0;i<10;i++){
	 	printf("Enter value at %d position : ",i+1);
	 	scanf("%d",&a[i]);
	 }
	 printf("The 10 values are : \n");
	 for(i=0;i<10;i++){
	 	printf("%d \n",a[i]);
	 }
	 */
     
     //  25. 
     
     /*
     int a[10], i;
	 printf("Enter 10 values : \n");
	 for(i=0;i<10;i++){
	 	printf("Enter value at %d position : ",i+1);
	 	scanf("%d",&a[i]);
	 }
	 printf("The 10 values are : \n");
	 for(i=9;i>=0;i--){
	 	printf("%d \n",a[i]);
	 }
	 */
	 
	 //  26.  
	 
	 /*
	 int a[10], i;
	 printf("Enter 10 values : \n");
	 for(i=0;i<10;i++){
	 	printf("Enter value at %d position : ",i+1);
	 	scanf("%d",&a[i]);
	 }
	 printf("The Even values are : \n");
	 for(i=0;i<10;i++){
	 if(a[i]%2==0){
	 	printf("The even no.s are : %d \n",a[i]);
	 }
	 else{
	 	continue;
	 }
	 }
	 */
	 
	 // 27.  
	 /*
	 int a[10], i;
	 int sum=0;
	 printf("Enter 10 values : \n");
	 for(i=0;i<10;i++){
	 	printf("Enter value at %d position : ",i+1);
	 	scanf("%d",&a[i]);
	 }
	 printf("The summation  are : \n");
	 for(i=0;i<10;i++){
	 	sum=sum+a[i];
	 }
	 printf("the sum is : %d ",sum);
	 
	 */
	 
	 //  28. 
	 /*
	  int a[10], i;
	 printf("Enter 10 values : \n");
	 for(i=0;i<10;i++){
	 	printf("Enter value at %d position : ",i+1);
	 	scanf("%d",&a[i]);
	 }
  int Min=a[0];
	 for(i=1;i<10;i++){
	 if(Min>a[i]){
	 	Min=a[i];
	 }
	 }
	 printf("Minimum no. is : %d ",Min);
	 
	 */
	 
	 //  29.  
	 
	 /*
	  int a[10], i;
	 printf("Enter 10 values : \n");
	 for(i=0;i<10;i++){
	 	printf("Enter value at %d position : ",i+1);
	 	scanf("%d",&a[i]);
	 }
  int Max=a[0];
	 for(i=1;i<10;i++){
	 if(Max<a[i]){
	 	Max=a[i];
	 }
	 }
	 printf("Maximum  no. is : %d ",Max);
	 
	 */
	 
	 //  30.  
	 /*
	 int a[]={23,42,67,68,12,50,45,24,89,90},n,i,f=0;
	 scanf("%d",&n);
	 for(i=0;i<10;i++){
	 	if(a[i]==n){
	 		f=1;break;
		 }
	 }
	 if(f==1){
	 	printf("The element found");
	 }
	 else{
	 	printf("The element not found");
	 }
	 
	 */
	 
	 //  31.
	 /*
	 
	 int a[]={23,42,67,68,12,50,45,24,89,90},temp,i,j;

	 	printf("Before sorting no. are : ");
	 for(i=0;i<10;i++){
	 
	 	printf("%d ",a[i]);}
	 	for(i=0;i<9;i++){
	 		for(j=i+1;j<10;j++){
	 			if(a[i]>a[j]){
	 				temp=a[i];
	 				a[i]=a[j];
	 				a[j]=temp;
			 }
		 }
	}
	 	printf("\nAfter sorting no. are : ");
   for(i=0;i<10;i++){
  
   	printf(" %d ",a[i]);
   }
	 */
	 
	//  32.
/*
int a[]={23,42,67,68,12,50,45,24,89,90},temp,i,j;

	 	printf("Before sorting no. are : ");
	 for(i=0;i<10;i++){
	 
	 	printf("%d ",a[i]);}
	 	for(i=0;i<9;i++){
	 
	 	for(j=i+1;j<10;j++){
	 		if(a[i]>a[j]){
	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
			 }
		 }
	}
	 	printf("\nAfter sorting no. are : ");
   for(i=0;i<10;i++){
  
   	printf(" %d ",a[i]);
   }
   int low=0,high=9,f=1,mid,n;
   printf("\nEnter the no. n :");
   scanf("%d",&n);
   
   while(low<high){
   	mid=(low+high)/2;
   
   if(a[mid]==n){
   	f=1;
   break;
   }
   else if(n>a[mid]){
   	low=mid+1;
   }
   else{
   	high=mid-1;
   	
   }
   }
   if(f==1){
	 	printf("The element found");
	 }
	 else{
	 	printf("The element not found");
	 }
	
	
	*/
	
	//  35.
	/*
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nThe matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	*/
	
	// 36
	/*
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nThe Sum of matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	
		sum=sum+a[i][j];
	}
}
printf("The sum are : %d",sum) ;
*/

//  37.
/*
   int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	int small=a[0][0];
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(small>a[i][j]){
				small=a[i][j];
			}
		}
	}
	printf("\n\nThe smallest element are  : %d ",small);
	
	*/
	
	// 38.
	/*
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	int large=a[0][0];
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(large<a[i][j]){
				large=a[i][j];
			}
		}
	}
	printf("\n\nThe largest element are  : %d ",large);
	*/
	
	//  39.
	/*
		int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nThe matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("\n %d \n",a[i][j]);
			}
		}
	}
	*/
	//  40.  
	
	/*
	int n,m;
	printf("Enter the value of row and column : ");
	scanf("%d %d",&n,&m);
	int a[n][m],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The matrix are : \n");
   	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
		int b[m][n];
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		
			b[i][j]=a[j][i];
		
		}
	}
	printf("The transpose of matrix are : \n");
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		
			printf("%d   ",b[i][j])	;	
		}
		printf("\n");
	}
	*/
	
	// 41.  
	/*
	int a[3][3], b[3][3], c[3][3];
	int i,j;
	printf("Enter the value of first matrix : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n The first matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the value of second  matrix : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n The second matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n The sum of matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d  ",c[i][j]);
		}
			printf("\n");
	}
	*/
	
	// 41. 
	
	/*
	int a[3][3], b[3][3], c[3][3];
	int i,j;
	printf("Enter the value of first matrix : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n The first matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the value of second  matrix : \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value at A%d%d position :",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n The second matrix are : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	int k;
	printf("The multiplication of matrix are : \n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			int f=0;
	 for(k=0;k<3;k++){
	 	f=f+a[i][k]*b[k][j];
	 c[i][j]=f;
	 }
		printf("%d  ",c[i][j]);
	}
	printf("\n");
	}
	*/
	
	//  43.
	
	/*
	
	char a[10];
	int i;
	printf("Enter a string : ");
	for(i=0;i<10;i++){
		a[i]=getchar();
		if(a[i]==13 || a[i]==10){
			a[i]='\0';
			break;
		}
	}
	printf(" \nYou have entered : \n");
	i=0;
	while(a[i]!='\0'){
		printf("%c",a[i]);
		i++;
	}
	*/
	
	// 44. 
	
	/*
	char a[10];
	int i;
	printf("Enter a string : ");
	for(i=0;i<10;i++){
		a[i]=getchar();
		if(a[i]==13 || a[i]==10){
			a[i]='\0';
			break;
		}
	}
	i=0;
	while(a[i]!='\0'){
		
		i++;
	}
	printf("Length = %d ",i);
	*/
	
	// 45.
	/*
	
	 char a[10];
	int i;
	printf("Enter a string : ");
	for(i=0;i<10;i++){
		a[i]=getchar();
		if(a[i]==13 || a[i]==10){
			a[i]='\0';
			break;
		}
	}
	printf("The reverse of the string is : ");
		for(i=strlen(a)-1;i>=0;i--){
			printf("%c",a[i]);
		}
		
		*/
		
		//  46. 
		 /*
char a[10],b[10];
    printf("Enter a string : ");
    gets(a);
    for(int i=0;i<=strlen(a);i++){
        b[i]=a[i];
    }
    puts(a);
    printf("\n the copy of string is : ");
    puts(b);
    
*/

// 47 .  
  /*
 char a[10],b[10];

    printf("Enter a string : ");
    gets(a);int i,j=0;
    for(i=strlen(a)-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    puts(a);
    printf("\n the reverse copy of string is : ");
    puts(b);
    */ 
    // 48.  
    /*
    char a[10],b[10],c[10];
   int i;

  printf("Enter first string ");
  gets(a);
  for(i=0;i<strlen(a);i++){
      if(a[i]>=97 && a[i]<=122){
          printf("%c",a[i]-32);
      }
      else{
          printf("%c",a[i]);
      }
  }
  */
  
  // 50. 
  /*
  char a[10],b[10],c[10];
   int i;

  printf("Enter first string ");
  gets(a);
  for(i=0;i<strlen(a);i++){
      if(a[i]>=65 && a[i]<=90){
          printf("%c",a[i]+32);
      }
      else{
          printf("%c",a[i]);
      }
  }
  */
  
  // 51. 
  
  
  char a[10];
printf("Enter a string : ");
gets(a);
int i=0, j=strlen(a)-1,f=0;
while(i<j){
    if(a[i]!=a[j]){
        f=1;
        break;
      
    }
      i++;
        j--;
}
if(f==0){
    printf("string is paliondrome " );
}
else{
    printf("string is not palindrome ");
}


// 53.  

/*
int a=10,*p;
p=&a;
printf("%d %d %d %d %d",a,&a,p,&p,*p);
*/
// 54.

/*
int a=10,*p,**q;
p=&a;
q=&p;
printf("%d %d %d %d %d %d %d ",a,&a,p,&p,*p,*q,**q);
*/

// 55.

// A. 
/*
int a[10],*p,i;
printf("Enter 10 values : ");
for(i=0;i<10;i++){

scanf("%d",&a[i]);}
p=&a[0];
printf("\n \n");
for(i=0;i<10;i++){
	printf("%d\n",*p);
	p++;
}
*/
// B.

/*
int a[10],*p,i;
printf("Enter 10 values : ");
for(i=0;i<10;i++){

scanf("%d",&a[i]);}
p=&a[9];
printf("\n \n");
for(i=9;i>=0;i--){
	printf("%d\n",*p);
	p--;
}
*/

// c.

/*
int a[10],*p,i;
printf("Enter 10 values : ");
for(i=0;i<10;i++){

scanf("%d",&a[i]);}
p=&a[0];
printf("\n \n");
for(i=0;i<10;i++){
  if(*p%2==0){
  	printf("%d\n",*p);
  }
  
	p++;
}
*/

// D. 

/*
 int a[10],*p,i,sum=0;
printf("Enter 10 values : ");
for(i=0;i<10;i++){

scanf("%d",&a[i]);}
p=&a[0];
printf("\n \n");
for(i=0;i<10;i++){

  sum=sum+*p;
	p++;
}
printf("%d",sum);
*/
//  E. 
  /*
  int a[10],*p,i;
printf("Enter 10 values : ");
for(i=0;i<10;i++){

scanf("%d",&a[i]);}
p=&a[0];
printf("\n \n");
for(i=1;i<10;i++){
 if(*p>a[i]){
 	*p=a[i];
 	p++;
 }
 
}
printf("%d",*p);
*/

// F. 
  /*
  int a[10],*p,i;
printf("Enter 10 values : ");
for(i=0;i<10;i++){

scanf("%d",&a[i]);}
p=&a[0];
printf("\n \n");
for(i=1;i<10;i++){
 if(*p<a[i]){
 	*p=a[i];
 	p++;
 }
 
}
printf("%d",*p);
*/


			return 0;
}
