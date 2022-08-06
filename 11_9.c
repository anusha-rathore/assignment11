#include<stdio.h>
int square(int);
int main()
{
    int number;
    printf("enter any number\n");
    scanf("%d",&number);
    int r=square(number);
    printf("the square of number(%d) is : %d ", number ,r);
    return 0;
}  
int square(int n){
    int z;
    z=n*n;
    return z;
}
