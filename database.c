#include"stdio.h"
#pragma pack(1)
    struct student
    {
        int roll;
        char name[30];
        char branch[20];

    };
    struct student m[5];
    int i=0;
void add();
void delete();
void search();
void display();
void sort();
main()
{
    int n;
    do
    {
        printf("\n1 for add");
        printf("\n2 for display");
        printf("\n3 for delete");
        printf("\n4 for search");
        printf("\n5 for sort ");
        printf("\n0 for exit");
        printf("\n enter your choice");
        scanf("%d",&n);
        if (n==1)
            add();
        else
        if(n==2)
            display();
        else
        if(n==3)
            delete();
        else
        if(n==4);
            search()
        
        
    }
    
}
    