#include<stdio.h>

int main()
{
    int n,first,last,sum;
    printf("Enter the Number: ");
    scanf("%d",&n);

    last = n % 10;
    while(n >= 10)
    {
        n = n/10;
    }
    first = n;
    sum = last + first;

    printf("Sum of first and last Number is: %d",sum);
    return 0;
}