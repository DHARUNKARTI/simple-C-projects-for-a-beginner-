#include<stdio.h>
long int fact(long int n);
int main()
{
	long int num,factorial;
	printf("Enter the number: ");
	scanf("%ld",&num);
	factorial=fact(num);
	printf("Factorial of your number is: %ld",factorial);
	float seq=0;
	for(int i=1;i<=num;i++)
	{
		seq=seq+((float)i/fact(i));
	}
	printf("\nValue of sequence is: %f",seq);
	return 0;
}
long int fact(long int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}	
}
