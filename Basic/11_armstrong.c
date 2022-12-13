#include<stdio.h>
int main(){
    int n,m,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    m=n;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r*r*r;
    }
    
    if(sum==m)
        printf("Number is armstrong");
    else
        printf("Number is Not armstrong");
    return 0;
}