#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the numbers: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
return 0;
}