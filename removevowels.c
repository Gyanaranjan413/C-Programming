#include<stdio.h>
#include<string.h>
void removevowels(char *);
void main()
{
    char x[]="india is  the best";
    removevowels(x);
    printf("%s\n",x);

}
void removevowels(char y[])
{
    int i=0,k;
    while (i<strlen(y))
    {
        if (y[i]=='a'|| y[i]=='e'|| y[i]=='i'|| y[i]=='o'|| y[i]=='u')
        {
            for (k= i ; k < strlen(y); k++)
            {
                y[k]=y[k+1];
            }
            
        }
        else
            i++;
        
    }
    
}
