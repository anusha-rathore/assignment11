#include<stdio.h>
int fact(int);
int combi(int ,int );

void pascal(int);
int main()
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    printf("/////////////////////////\n");
   pascal(num);
   return 0;
}

void pascal(int n){
    int i,j;
    for ( i = 0; i <=n; i++)
    {
        for ( j = 0; j <=i; j++)
        {
         printf("%d", combi(i,j));

        }
        printf("\n");
        
    }
    
}

int combi(int a,int b){
    int combination=fact(a)/(fact(b)*fact(a-b));
   return combination;

}
int fact(int n)
{
    int fact=1;
    for ( int i = n; n>=1; n--)
    {
        fact=fact*n;
    }
    return fact;
    
}