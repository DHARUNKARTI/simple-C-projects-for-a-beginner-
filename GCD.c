// GCD calculation
#include<stdio.h>
int main()
{
    int a,b,c,gcd,i=1;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
     if (a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    while(i<=c)
    {
        if ((a%i==0)&&(b%i==0))
        {
            gcd=i;
        }
        else
        {
            gcd==1;
        }
        
        i++;
    }
    printf("GCD of the numbers is: %d",gcd);
    return 0;
    
}