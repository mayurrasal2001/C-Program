#include<stdio.h>

int main()
{
    int n,t, rem,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    t = n;
    while(t > 0)
    {
        rem = t % 10;
        rev = rev * 10 + rem;
        t = t/10;
    }

    printf("Reverse of the %d is : %d",n,rev);
}