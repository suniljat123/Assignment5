#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nFirst %d odd Natural numbers in reverse order are=",n);
    for(int j=n*2-1,i=1;i<=n;j-=2,i++)
    {
        printf("%d ",j);
    }
    return 0;
}

