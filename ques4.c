#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nFirst %d odd Natural numbers are=",n);
    for(int i=1;i<=n;i++)
        printf("%d ",i*2-1);
    return 0;
}

