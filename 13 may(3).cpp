#include<stdio.h>
int main()
{
	int i=1,N;
	
	printf("Enter value of N:");
	scanf("%d",&N);
	
	
	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}while(i<=N);
}