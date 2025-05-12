#include<stdio.h>
int main()
{
	int marks;
	char grade;
	
	{
	
	printf("Enter your marks:");
	scanf("%d",&marks);

	(marks>=80)? 
	           (printf("your grade is A\n",grade),grade='A')
	           :
	           (	
	(marks>=60)? 
	           (printf("your grade is B\n",grade),grade='B')
	           :
	           (	
	(marks>=40)? 
	           (printf("your grade is C\n",grade),grade='C')
	           :
	           (	
	(marks>=20)? 
	           (printf("your grade is D\n",grade),grade='D')
	           :
	           (printf("your grade is E\n",grade),grade='E'))));
			   }
	           
	           	switch(grade)
	        {
	           	case 'A' :
	           		printf("Excellent work!!\n");
	           		
					break;
				   
	           	case 'B':
	           		printf("well done.\n");
					break;
				   
	           	case 'C':
	           		printf("Good job\n");
					break;
				   
	           	case 'D':
	           		printf("You passed,but you could do better\n");
					break;
				   
	           	case 'E':
	           		printf("you are faild\n");
					break;
				}
	    
	           if(marks>=40)
	           {
	           	printf("congratulation,You eligible for the next level");
			   }
			   else
			   {
			   	printf("Please try again next time");
			   }
	           
	           
	           
	           
	           
	           
	           
	           
	           
	           
	       
	}