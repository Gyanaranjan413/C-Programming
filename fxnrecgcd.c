#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,x;
    printf("enter two number");
    scanf("%d%d",&a,&b);

    x=gcd(a,b);
    printf("%d",x);

}
int gcd(int a,int b)
{
    
    if(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
     gcd(a,b);
    }
    return a;
}