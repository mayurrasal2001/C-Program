#include<stdio.h>
int main(){
int n,i,rev=0,temp,rem;

printf("Enter the number: ");
scanf("%d",&n);
temp = n;
while(temp!=0)
{
    rem = temp % 10;
    rev = rev * 10 + rem;
    temp = temp / 10;
}

if(rev==n)
    printf("Number is palindrome");
else
    printf("Number is not palindrome");
return 0;
}