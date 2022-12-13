#include<stdio.h>

int main()
{
    int n, temp, rem, rev=0;

    printf("Enter the Number: ");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }

    if(rev==n)
        printf("Number is Palindrome !!");
    else
        printf("Number is not palindrome !!");
}