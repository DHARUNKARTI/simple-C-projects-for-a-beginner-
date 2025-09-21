#include<stdio.h>
int main()
{
    // Write a C program to print the armstrong number between 100 and 999
    int num,sum=0,temp,rem;
    for(num=100;num<=999;num++)
    {
        temp=num;
        while(temp)
        {  rem=temp%10;
           sum=sum+(rem*rem*rem);
           temp=temp/10; 
        }
    if (sum==num)
        {
            printf("%d ",num);
        }
    sum=0;        
        
    }
    
    
     return 0;
}