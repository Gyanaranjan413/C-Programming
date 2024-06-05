#include<stdio.h>
int fact(int);
 int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);

    x=fact(n);
    printf("%d",x);
}
int fact(int n)
{
    static int f=1;
    if (n>0)
    {
        f=f*n;
        n--;
        fact(n);
    }
    return f;
    
}