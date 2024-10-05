#include<stdio.h>
int main()
{int num,num1,num2,nextnum;
printf("Enter any number and see if its prime or not\n");
scanf("%d",&num);
for(int i=2;i<num;i++)
{int remainder=num%i;
if(remainder==0)
{printf("This number is not a prime number");
return 0;
}
}
printf("This number is prime number\n");
printf("The Fibonacci sequence according to the size of number\n");
for (int i = 1; i <= num; i++) 
{
printf("%d,",num1);
nextnum= num1+num2;
num1= num2;
num2= nextnum;
}
return 0;
}
