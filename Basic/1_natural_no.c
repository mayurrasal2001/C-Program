// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the Number: ");
//     scanf("%d",&n);

//     for(i=0;i<=n;i++)
//     {
//         printf("%d\n",i);
//     }
// return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    
    while(n>=0)
    {
        printf("%d\n",n);
        n--;
    }
return 0;
}