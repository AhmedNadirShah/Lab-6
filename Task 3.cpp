#include<stdio.h>
int main()
{int a;
do
{
printf("Enter a positive number= ");
scanf("%d",&a);
}
while(a<0);
printf("%d is a positive number",a);
return 0;
}
