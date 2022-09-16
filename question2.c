//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int,int);
int main()
{ 
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("hcf of %d and %d is %d",a,b,HCF(a,b));
    return 0;
}
  int HCF(int x,int y)
  {
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        break;
    
    }
      return x*y/i;
  }