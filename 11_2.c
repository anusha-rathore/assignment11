#include<stdio.h>
int hcf(int,int);
int main(){
    int n1,n2 ,h;
    printf("enter two number\n");
    scanf("%d %d",&n1,&n2);
    h=hcf(n1,n2);
    printf("HCF of %d and %d is %d ",n1,n2,h);
    return 0;

}
int hcf(int N1,int N2){
    int h;
    for ( h = N1<N2?N1:N2; h >=1; h--)
    {
        if (N1%h==0 && N2%h==0)
            return h;
        
        
    }
    
}