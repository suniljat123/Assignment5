#include<stdio.h>
int main()
{
    int n,j;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nFirst %d Natural numbers in reverrse order are=",n);
    for(int j=n,i=1;i<=n;j--,i++)
    {
        printf("%d ",j);
    }
    return 0;
}

