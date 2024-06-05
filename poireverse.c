#include<stdio.h>
int reverse(int *);
int main()
{
    int n,x;
    printf("enter any number");
    scanf("%d",&n);
    x=reverse(&n);
    printf("%d%d\n",n,x);
}
int reverse(int *p)
{
    int r,s=0;
    while(*p>0)
    {
        r=*p%10;
        s=s*10+r;
        *p=*p/10;
    }
    return s;
}


