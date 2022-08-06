#include<stdio.h>
void prime(int);
int main(){
    int num;
    printf("ENTER N\n");
    scanf("%d",&num);
    printf("first N prime numbers");
   prime(num);
   return 0;
}
void prime(int n){
    int i,x;
    for ( x = 2; x<n; x++)
    {
        /* code */
    
    
    for ( i = 2; i <x; i++)
    {
     if (x%i==0)
     {
        break;
     }
    }
    
    if (i==x)
    {
       printf("%d \n",i);
    }
    
    }   
    
}