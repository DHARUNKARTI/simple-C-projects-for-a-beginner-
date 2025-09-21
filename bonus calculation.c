#include<stdio.h>
int main()
{//Employee Bonus Calculation
	int yrs,role,rating,salary,_1,_2;
	float salary_bonus;
	printf("If Manager-1, Team lead-2\n");
	printf("Enter your: no.of years of experience, Your role, your rating(out of 5), your current salary\n");
	scanf("%d%d%d%d",&yrs,&role,&rating,&salary);
	printf("no.of years of experience:%d, Your role:%d, your rating:%d, your current salary:%d\n",yrs,role,rating,salary);
	if (yrs>=15)
	{
		if (role==1)
		{
			if(rating==5)
			{
				printf("30%% bonus");
				_1=30;
			}
			else
			{
				printf("Basic bonus: 25%%");	
			}
		}
		else if (role==2)
			{
				if (rating==2||rating==3)
				{
					printf("28%% bonus");
					_1=28;
				}
				else
				{
					printf("Basic bonus: 25%%");
					_1=25;	
				}
			}
		
	}
	else if (yrs>=10)
	{
		if (role==1)
		{
			if(rating==5)
			{
				printf("25%% bonus");
				_1=25;
			}
			else
			{
				printf("Basic bonus: 20%%");
				_1=20;
			}
		}
		else if (role==2)
			{
				if (rating==2||3)
				{
					printf("23%% bonus");
					_1=23;
				}
				else
				{
					printf("Basic bonus: 20%%");
					_1=20;	
				}
			}
	}
	else if (yrs>=5)
	{
		if (role==1)
		{
			if(rating==5)
			{
				printf("15%% bonus");
				_1=15;
			}
			else
			{
				printf("Basic bonus: 10%%");
				_1=10;	
			}
		}
		else if (role==2)
			{
				if (rating==2||3)
				{
					printf("13%% bonus");
					_1=13;
				}
				else
				{
					printf("Basic bonus: 10%%");
					_1=10;	
				}
			}
		
	
	}
	else
	{
		if (role==1)
		{
			if(rating==5)
			{
				printf("10%% bonus");
				_1=10;;
			}
			else
			{
				printf("Basic bonus: 5%%");
				_1=5;	
			}
		}
		else if (role==2)
			{
				if (rating==2||3)
				{
					printf("8%% bonus");
					_1=8;
				}
				else
				{
					printf("Basic bonus: 5%%");
					_1=5;	
				}
			}
		
	
	}
	salary_bonus=(_1*salary)/100.0;
	printf("\nbonus: %f",salary_bonus);
			
			
}