#include<stdio.h>
int main(){
	
	int a,b,c,d;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);

	 
	 if(a>b){
	 	if(b>c){
	 		if(c>d){
	 			printf("d is min:%d",d);
		 
		 }
		 else{
		 	if(b>d){
		 		printf("d is min:%d",d);
		 		
		 
		 }
		 else{
		 	printf("b is min:%d",b);
		 	
		 	
		 }
	 	
		 	
		 	
		 }
	 	
		 
		 }
		 else{
		 	printf("b is min:%d",b);
		 	
	}
		 
		 }
		 else{
		 	if(a>c){
		 		if(c>d){
		 			printf("d is min:%d",d);
		 
		 }
		 else{
		 	printf("c is min:%d",c);
		 }
		 
		 }
		 else{
		 	if(a>d){
		 		printf("d is min:%d",d);
		 
		 }
		 else{
		 	printf("a is min:%d",a);
		 	
		 	
		 }
	 	
		 	
		 	
		 }
	 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 	
		 }
	 	
	 
	 

	 
	 
	 
	 
	 
	 
	 
	 
	 
}