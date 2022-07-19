#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nFirst %d even Natural numbers are=",n);
    for(int i=1;i<=n;i++)
        printf("%d ",2*i);
    return 0;
}


