#include<stdio.h>

int main()
{
    int n , t, rem, prod=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    t = n;
    while(t > 0)
    {
        rem = t % 10;
        prod = prod * rem;
        t = t/10;
    }

    printf("Product of the %d is: %d",n,prod);
}