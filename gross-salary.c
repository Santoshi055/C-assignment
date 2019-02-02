#include<stdio.h>
int main(int argc, char const *argv[])
{
	int salary;
	printf("Enter the salary of the employee\n");
	float hra,da;
	scanf("%d",&salary);
	if(salary>=1&&salary<=4000)
	{
		hra=salary/10.0;
		da=salary/2.0;
	}
	else if(salary<=8000)
	{
		hra=salary/5.0;
		da=(salary*60.0)/100;
	}
	else if(salary<=12000)
	{
		hra=salary/4.0;
		da=(salary*70.0)/100;
	}
	else 
	{
		hra = (salary*30.0)/100;
		da = (salary*80.0)/100;
	}
	float gross_salary=salary+hra+da;
	printf("gross salary of the employee is %f\n",gross_salary);
	// to stop console from closing
	int stable;
	scanf("%d",&stable);
	return 0;
}