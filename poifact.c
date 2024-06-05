#include<stdio.h>
int fact(int *);
int main()
{
    int x,n;
    printf("enter the number");
    scanf("%d",&n);
    x=fact(&n);
    printf("%d",x);

}
int fact( int *p)
{
int f=1;
while (*p>0)
{
    f=f* *p;
    (*p)--;
}
return f;
}