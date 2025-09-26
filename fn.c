#include<stdio.h>
void swap_call_by_val(int,int);
void swap_call_by_ref(int *,int *);
int main()
{
	int a=1,b=2,c=3,d=4;
	printf("\nIn main() vlaue of a is %d and value of b is %d",a,b);
	swap_call_by_val(a,b);
	printf("\nIn main() vlaue of a is %d and value of b is %d",a,b);
	printf("\nIn main() vlaue of c is %d and value of d is %d",c,d);
	swap_call_by_ref(&c,&d);
	printf("\nIn main() vlaue of c is %d and value of d is %d",c,d);
	return 0;
}
void swap_call_by_val(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("\nIn swap_call_by_val() vlaue of a is %d and value of b is %d",a,b);
}
void swap_call_by_ref(int *c,int *d)
{
	int temp=*c;
	*c=*d;
	*d=temp;
	printf("\nIn swap_call_by_ref() vlaue of c is %d and value of d is %d\n",*c,*d);
}
