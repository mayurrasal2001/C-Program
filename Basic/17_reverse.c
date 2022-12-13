#include<stdio.h>
int main(){
int n,r,rev=0,t;
printf("Enter the Number: ");
scanf("%d",&n);
t=n;
while(t > 0)
{
    t = n % 10;
    rev = rev * 10 + t;
    n = n / 10;
}

printf("reverse no is %d",rev);

return 0;
}