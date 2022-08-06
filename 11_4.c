#include<stdio.h>
int next_prime(int);
int main(){
    int num;
    printf("enter num\n ");
    scanf("%d",&num);
    int n=next_prime(num);
    printf("Next prime number of  %d is %d",num,n);
    return 0;
}
int next_prime(int num){
 int i,x;
 for ( x = num+1 ;; x++)
 {
    for ( i = 2; i <x; i++)
    {
        if (x%i==0)
           break;
    }
     if (i==x)
{
    return i;
}

    
 }
 
 {
    /* code */
 }
 
}
