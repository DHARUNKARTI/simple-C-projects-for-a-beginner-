//factorial calculation
#include<stdio.h>
int main()
{
    int sum=1,fact,i=1;
    printf("Enter the number: ");
    scanf("%d",&fact);
    while(i<=fact)
    {
        sum=sum*i;
        i++;
    }
    printf("factorial of your number: %d",sum);
    
    
    return 0;
    
}