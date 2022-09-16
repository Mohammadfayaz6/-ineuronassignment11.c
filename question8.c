//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int);
 int comb(int n,int r)
  {
    return fact(n)/(fact(r)*fact(n-r));
  }

  int fact(int n)
  {
    int i,f=1;
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
       return f;
  }
  void pascaltriangle(int n)
  {
     int i,j,k,r;
     for(i=1;i<=n;i++)
     {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i &&k)
             {
              printf("%2d",comb(i-1,r));
              k=0;
              r++;
             }
             else
             {
              printf("  ");
              k=1;
             }
        } 
        printf("\n");    
              
             
      }
        
    } 

 int main()
{
    pascaltriangle(6);
    return 0;
}