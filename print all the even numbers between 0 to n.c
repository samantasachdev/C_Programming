#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=0;i<=n;)
    {
        printf("\n%d",i);
        i=i+2;
    }
}
