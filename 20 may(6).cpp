#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=5;a>=1;a--)
	{
		for(b=a; b<5;b++)
		{
			printf(" ");
		}
		for(c=5;c>=6-a;c--)
		{
			printf("%d",c);
		
			
		}
		printf("\n");
	}
	
}
  
/*
54321
 5432
  




*/        