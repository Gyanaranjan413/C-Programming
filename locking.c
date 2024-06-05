#include<stdio.h>
#include<pthread.h>
#include<fcntl'h>
#include<string.h>
int bbsr(int);
int ctc(int);
    int m=0;
void main()
{
    pthread_t x,y;
    int k=open("letter.txt",O_CREAT|O_TRUNC|O_WRONLY);

    pthread_create(&x,0,(void *)bbsr,(void *)k);
    pthread_create(&y,0,(void *)bbsr,(void *)k);

    pthread_join(x,0);
    pthread_join(y,0);
}
int bbsr(int a)
{
    char x[]="india is the best";
    int i;
    pthread_mutex_lock((void *)&m);
    for ( i = 0; i <strlen(x); i++)
    {
        write(a,&x[i],1);
        sleep(1);
    }
    pthread_mutex_unlock((void *)&m);
    
}
int ctc(int b)
{
    char x[]="man is mortal";
    int i;
    pthread_mutex_lock((void *)&m);
    for ( i = 0; i <strlen(x); i++)
    {
        write(b,&x[i],1);
        sleep(1);
    }
    pthread_mutex_unlock((void *)&m);
    
}

