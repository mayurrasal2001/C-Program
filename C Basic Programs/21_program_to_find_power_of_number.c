#include<stdio.h>

int main()
{
    int x,y,ans=1;
    printf("Enter the Number: ");
    scanf("%d",&x);

    printf("Enter the Number ");
    scanf("%d",&y);

    for(int i=0; i<=y;i++)
    {
        ans= ans * x;
    }

    printf("power of the %d * %d= %d",x,y,ans);
    return 0;
}
