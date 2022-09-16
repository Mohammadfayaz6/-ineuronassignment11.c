//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int Tocheckprime(int);
int main()
{ 
    int n,res;
    printf("enter a number\n");
    scanf("%d",&n);
    
    if(Tocheckprime(n)==1)
       printf("%d is prime number",n);
    else
       printf("%d is not prime number",n);
    return 0;
}

  int Tocheckprime(int x)
  {
    int i,j,flag=0;
    for(i=2;i<=x/2;i++)
    {
       if(x%i==0)
       {
         flag=1;
       }
    }
     if(flag==0)
     {
        return 1;
     }
     else
     {
        return 0;
     }
         
  }