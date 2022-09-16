//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void Toprintprime(int);
int main()
{
    int num;
    printf("Enter a positive number\n");
    scanf("%d",&num);
    printf("first N prime numbers\n");
    Toprintprime(num);
    return 0;
}   
    
    void Toprintprime(int n)
    {
        int i,j,flag;
        for(i=1;i<=n;i++)
        {
            flag=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                   flag=1;
                   
            }
            
          if(flag==0)
             printf(" %d ",i);
                                
        }
    }