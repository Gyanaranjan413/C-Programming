#include<stdio.h>
int sumeach(int *);
int main()

{
    int x,n;
    printf("enter the number");
    scanf("%d",&n);

    x=sumeach(&n);
    printf("%d",x);

}
int sumeach(int *p)
{
    int s=0,r;
    while (*p>0)
    {
        r=*p%10;
        s=s+r;
        *p=*p/10;
    }
    return s;
    
}