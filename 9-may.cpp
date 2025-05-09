#include<stdio.h>

int main()
{
	int base_salary,HRA=10,DA=5,TA=85,Gross_salary;
	
	printf("Enter base salary:");
	scanf("%d",&base_salary);
	
	Gross_salary=base_salary+HRA+DA+TA;
	
	printf("Gross salary is: %d",Gross_salary);
	
	
	
	
	
}