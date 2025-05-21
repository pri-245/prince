#include<stdio.h>
int main()
{
	int a,b,c,d;

	
	for(a=5;a>=1;a--)
	{
		
		for(c=1;c<=a;c++)
		{
			printf("%d",c);
	    }
		for(b=5; b>a;b--)
		{
			printf("  ");
		}
		for(d=a;d>=1;d--)
		{
			printf("%d",d);
		}
		printf("\n");
	}
	for(a=5;a>=1;a--)
	{
		
		for(c=1;c<=6-a;c++)
		{
			printf("%d",c);
	    }
		for(b=4; b>=6-a;b--)
		{
			printf("  ");
		}
		for(d=6-a;d>=1;d--)
		{
			printf("%d",d);
		}
		printf("\n");
	}
	
}
/*
1          1
12        2





*/
 