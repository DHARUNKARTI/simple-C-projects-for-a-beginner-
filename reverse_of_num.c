#include <stdio.h>

int main()
{
    //digit reversing
    int num,revnum=0,remain;
    printf("Enter three numer: ");
    scanf("%d",&num);
    while(num>0)
    {
        remain=num%10;
        revnum=(revnum*10)+remain;
        num=num/10;
        
    }
    printf("Reverse of your number is: %d",revnum);

    return 0;
}