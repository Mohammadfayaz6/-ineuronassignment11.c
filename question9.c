//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int printsquarenumber(int);
int main()
{
    int val;
    printf("Enter a number\n");
    scanf("%d",&val);
    printf("square of %d is %d",val,printsquarenumber(val));
    return 0;
}   
    int  printsquarenumber(int num)
    {
        int sum;
        sum=num*num;
        return sum;
    }