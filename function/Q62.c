#include<stdio.h>
void swap (int *a, int *b);

int main ()
{
int a, b ;
 printf ("Enter first value : ");
scanf ("%d", &a);
printf ("Enter Second value : ");
scanf ("%d", &b);
printf ("Before swapping the value of a = %d and b = %d \n", a, b);
swap (&a, &b);
printf("After swapping the value of a = %d and b = %d ",a,b);
return 0;
}
void swap (int *a, int *b)
{
int c;
c=*a;
*a=*b;
*b=c;

} 
