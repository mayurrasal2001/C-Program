// #include<stdio.h>
// int main(){
// int n;

// for(int i=50;i>=0;i--)
// {
//     printf("%d\n",i);
// }
// return 0;
// }

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>=0)
    {
        printf("%d\n",n);
        n--;
    }
return 0;
}

