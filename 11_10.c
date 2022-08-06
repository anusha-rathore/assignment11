#include<stdio.h>
int fact(int);
int main(){
    
     int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
	printf("find the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n");
    printf("The sum of the series is : %d\n",sum);
    return 0;
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