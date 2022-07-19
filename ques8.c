 #include<stdio.h>
int main()
{
    int n;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nSqures of first %d Natural numbers are=",n);
    for(int i=1;i<=n;i++)
        printf("%d ",i*i);
    return 0;
}

