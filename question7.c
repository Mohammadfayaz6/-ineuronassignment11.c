//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void printfibonacci(int);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printfibonacci(n);
    return 0;
}  
   void printfibonacci(int m)
   {
     int i,prev=-1,cur=1,next=0;
     printf("first N terms of fibonacci series\n");
     for(i=0;i<=m;i++)
     {
        next=prev+cur;
        printf("%d ",next);
        prev=cur;
        cur=next;
     }
        
   }
