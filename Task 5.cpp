#include<stdio.h>
int main()
{int num;
printf("Enter any number and see if its prime or not\n");
scanf("%d",&num);
for(int i=2;i<num;i++)
{int remainder=num%i;
if(remainder==0)
{printf("This number is not a prime number");
return 0;
}
}
printf("This number is prime number");
return 0;
}
