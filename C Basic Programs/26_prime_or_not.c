#include<stdio.h>

int main()
{

    int n,i;
    int c=0;

    printf("Enter the Number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n % i==0)
        {
            c++;
        }
    }

    if(c==2)
        printf("Number is prime");
    else
        printf("Number is not prime");
    return 0;
}