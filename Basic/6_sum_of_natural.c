#include<stdio.h>
int main(){
    int i,n;
    int sum = 0;

    printf("Sum of first N natural numbers are: ");
    scanf("%d",&n);

    for(i = 0;i<=n;i= i+ 2)
    {
        sum = sum + i ;
    }
    printf("%d\n", sum);

return 0;
}