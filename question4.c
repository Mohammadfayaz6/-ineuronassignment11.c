//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
void nextprime(int);
int main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    nextprime(x);
    return 0;
}

 void nextprime(int N)
 {
    int i,flag=0,j;
    for(j=N;j>0;j++)
    { flag=0;
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("the next prime number is %d",j);
            break;
        } 
        
    }
     
 }