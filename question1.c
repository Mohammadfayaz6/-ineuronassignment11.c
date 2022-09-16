//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int,int);
int main()
{ 
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("lcm of %d and %d is %d",a,b,LCM(a,b));
    return 0;
}
  int LCM(int x,int y)
  {
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        break;
    }
      return i;
  }