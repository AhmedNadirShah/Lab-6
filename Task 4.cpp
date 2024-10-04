#include<stdio.h>
int main()
{int a, answer;
do
{printf("Enter any number");
scanf("%d",&a);
answer+=a;
}
while(a>0);
printf("Entering 0 terminates the program");
return 0;
}
