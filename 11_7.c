#include<stdio.h>
void fibonacci(int );
int main(){
    int N;
    printf("enter terms\n");
    scanf("%d",&N);
    printf("Fibonacci series:\n");
    fibonacci(N);
    return 0;
}
void fibonacci(int n)
{
    int a=0,b=1 ,c;
    printf("%d\n%d\n",a,b);
    for ( int i = 1; i <n; i++)
    {
        /* code */ c=a+b;
        a=b;
        b=c;
      printf("%d\n",c);
    }
    
}