#include<stdio.h>
int main()
{  
    int choice;
    
	printf("\npress 1 for english");
	printf("\npress 2 for hindi");
	printf("\npress 3 for gujrati");
	
	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		{
			printf("\npress 1 for intrnet recharge");
			printf("\npress 2 for Top-up recharge");
			printf("\npress 3 for special recharge");
			
				printf("\nenter your choice:");
	            scanf("%d",&choice);
	            
	            switch(choice)
	            { 
	            case 1:
	            	printf("you have successfully done a internet recharge\n");
	            	break;
	            case 2:
	            		printf("you have successfully done a top-up recharge\n");
	            		break;
	            case 3:
	            			printf("you have successfully done a special recharge\n");
	            			break;
				}
				break;
	            
	     case 2:       
	    {
	    	printf("\n intrnet recharge ke liye 1 dabaiye");
			printf("\n Top-up recharge ke liye 2 dabaiye");
			printf("\n special recharge ke liye 3 dabaiye");
			
				printf("\nenter your choice:");
	            scanf("%d",&choice);
			     
	            switch(choice)
	            { 
	            case 1:
	            	printf("apne safaltapurvak internet recharge kar diyA\n");
	            	break;
	            case 2:
	            		printf("apne safaltapurvak TOP-UP recharge kar diyA\n");
	            		break;
	            case 3:
	            			printf("apne safaltapurvak special recharge kar diyA\n");
	            			break;
	            			
				}
				break;
				}        
	     case 3:
		 {
		 	printf("\n intrnet recharge mate 1 dabavo");
			printf("\n top-up recharge mate 2 dabavo");
			printf("\n special recharge mate 3 dabavo");
		 	
				printf("\nenter your choice:");
	            scanf("%d",&choice);
			     
	            switch(choice)
	            { 
	            case 1:
	            	printf("tame safaltapurvak internet recharge karyu chhe \n");
	            	break;
	            case 2:
	            		printf("tame safaltapurvak top-up recharge karyu chhe\n");
	            		break;
	            case 3:
	            			printf("tame safaltapurvak special recharge karyu chhe\n");
	            			break;
	            			
				}
				break;
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
				}       
	            
	            
	            
	            
	            
	            
	            
	            
	            
	
		}
		
		
		
		
		
		
		
		
		
	}
	
	
}
