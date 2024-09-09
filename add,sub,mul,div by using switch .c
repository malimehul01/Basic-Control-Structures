#include<stdio.h>
main()
{
	
	int opt,no1,no2;
	
	printf("\npress 1 for add");
	printf("\npress 2 for sub");
	printf("\npress 3 for mul");
	printf("\npress 4 for div");
	
	printf("\nEnter option=>");
	scanf("%d",&opt);
	
	printf("\nEnter no1=>");
	scanf("%d",&no1);
		printf("\nEnter no2=>");
	scanf("%d",&no2);
	
	switch(opt)
	{
		
		case 1:
			printf("add is =%d",no1+no2);
			break;
			
		case 2:
			printf("sub is =%d",no1-no2);
			break;
		case 3:
			printf("mul is =%d",no1*no2);
			break;
		case 4:
			printf("div is =%d",no1/no2);
			break;
		default:
		printf("only 1 to 4");				
		
	}
	
	
	
	
	
	
	
	
	
}
