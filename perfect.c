#include<stdio.h>
void perfectnum(int);
void main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    perfectnum(n);
}
void perfectnum(int num){
    int sum=0,rem,i;
    for(i=1;i<num;i++){
        rem=num%i;
        if(rem==0){
            sum+=i;
        }
    }
    if(sum==num)
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);

}