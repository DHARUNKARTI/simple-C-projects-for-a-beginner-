#include <stdio.h>

int main()
{
    // write a C program to print the prime number from 2 to 1000
    int num,i=2,flag=0;
    printf("enter the num: ");
    scanf("%d",&num);
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        printf("not prime");
    }
    else if(num==1)
    {
        printf("neither prime nor composite");
    }
    else
    {
        printf("prime");
    }
    
    
    return 0;
}