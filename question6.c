//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void Toprintprime(int,int);
int main()
{
    int num,var;
    printf("Enter two  positive number\n");
    scanf("%d%d",&num,&var);
    printf(" prime numbers between two given numbers\n");
    Toprintprime(num,var);
    return 0;
}   
    
    void Toprintprime(int n,int k)
    {
        int i,j,flag;
        for(i=n;i<=k;i++)
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