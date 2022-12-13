#include<stdio.h>

int main()
{
    int n, first,last;

    printf("Enter the Number: ");
    scanf("%d",&n);

    last= n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;

    printf("First degit is %d & last degit is %d",first,last);

    return 0;
}