 #include<stdio.h>
int main()
{
    int n;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nTable of %d=",n);
    for(int i=1;i<=10;i++)
        printf("\n%d*%d=%d",n,i,n*i);
    return 0;
}

