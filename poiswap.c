#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("enter tne value");
    scanf("%d%d\n",&a,&b);
    printf("before %d%d\n",a,b);
    swap(&a,&b);
    printf("after %d%d\n",a,b);
}
void swap(int *n1,int *n2)
{
    int temp =*n1;
        *n1=*n2;
        *n2=temp;
}