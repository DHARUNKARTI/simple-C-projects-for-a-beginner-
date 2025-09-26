#include<stdio.h>
float fact(int n)
{
	int sum=1,a;
	for(a=1;a<=n;a++)
	{
		sum=sum*a;
	}
	return sum;
}
float combination(int a,int b)
{
	int v;
	float result;
	v=a-b;
	result=fact(a)/(fact(v)*fact(b));
	printf("vlaue of C(n,r) is %f",result);
}
int main()
{
	//combination or C(n,r) calculation
	int a,b;
	printf("Enter value of n anr r :");
	scanf("%d%d",&a,&b);
	combination(a,b);
}


