#include<stdio.h>
int prime(int);
int main(){
    int num;
    printf("ENTER NUMBER\n");
    scanf("%d",&num);
   int r=prime(num);
   if (r==1)
   {
    printf("number is prime");
   }
   else
   {
    printf("number is not  prime");

   }
   
 
   return 0;
}
int prime(int n){
    int i;
    for ( i = 2; i <n/2; i++)
    {
     if (n%i==0)
     {
        return 0;
     }
     
    }
    if (i==n/2)
    {
       return 1;
    }
    
    return 0;
    
}