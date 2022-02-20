#include<stdio.h>
palind()
{
int n,r,sum=0,temp;
printf("\nEnter the number to check palindrum=");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("palindrome number\n");
else
printf("not palindrome\n");
//return 0;
}

