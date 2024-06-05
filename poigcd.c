#include<stdio.h>
int gcd(int *,int *);
int main()
{
    int x,a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    x=gcd(&a,&b);
    printf("%d",x);

}
int gcd (int *p,int *q)
{
    while(*p!=*q)
    {
        if(*p>*q)
            *p=*p-*q;
        else
            *q=*q-*p;
    }
    return *p;
}