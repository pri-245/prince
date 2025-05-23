#include<stdio.h>
int main()
{
	int size=0;
	
	
	printf("Enter the size of arry:");
	scanf("%d",&size);
	int a[size];
	
	printf("Enter elements :\n");
	for(int i = 0;i<size;i++)
	{
		printf("a[%d]=",i);
	     scanf("%d",&a[i]);
		
	}
	printf("length of arry is : %d",size);
	
}