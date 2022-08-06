#include<stdio.h>
void prime(int, int);
int main(){
    int num,num2;
    printf("ENTER two Number\n");
    scanf("%d %d",&num ,&num2);
    printf("all Prime numbers between two given numbers is :\n");
   prime(num,num2);
   return 0;
}
void prime(int x ,int y){
    int i;
    while (x<=y-1)
    
    {
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
    x++;
    }   
    
}