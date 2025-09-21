#include<stdio.h>
int main()
{
    // write a C program to print the prime number from 2 to 1000
    int flag,num,i;
    for (num=2;num<1000;num++)
    {
        flag=0;
        for (i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
            
        }
        if (flag==0)
            {
                printf("%d ",num);
            }
    }
    
    return 0;
}