#include<stdio.h>
int main()
{int num,answer=0,digit;
printf("Enter any number to see is it an armstrong number or not\n");
scanf("%d",&num);
int num1=num;
while(digit!=0)
{digit=num1%10;
digit=digit*digit*digit;
answer+=digit;
num1=num1/10;
}
if(answer==num)
printf("It is an armstrong number");
else
printf("It is not an armstrong number");
return 0;
}
