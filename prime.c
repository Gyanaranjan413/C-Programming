#include<stdio.h>
void main()
{
    int n,c=0,i;
    printf("enter any number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");
}