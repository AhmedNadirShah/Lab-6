#include<stdio.h>
int main()
{int a, Even_Number, i;
printf("Enter a number to find the even numbers inside(number should be positive)=");
scanf("%d",&a);
if(a<0)
{printf("Enter a positive number");
}
else
while(i<a)
{i+=2;
printf("%d, ",i);
}
return 0;
}
