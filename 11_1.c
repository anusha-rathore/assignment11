#include<stdio.h>
int lcm(int , int);
int main()
{
    int number1,number2,l;
    printf("enter two number\n");
    scanf("%d %d", &number1,&number2);
    l=lcm(number1,number2);
    printf(" LCM of %d and %d is:%d",number1,number2,l);
   return 0;
}
int lcm(int N1,int N2){
    int i,l;
    l=(N1<N2)?N2:N1;
 for (    l=(N1<N2)?N2:N1; l<N1*N2; l++)
 {
    /* code */
    if (l%N1==0&& l%N2==0 )
        return l;
 }
}
