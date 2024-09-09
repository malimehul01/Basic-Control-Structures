#include<stdio.h>
main()
{
	
	
	int opt,qty;
	
	
	printf("\npress 1 for pizza");
	printf("\npress 2 for sandwich");
	printf("\npress 3for maggie");
	
	printf("\n enter your option=>");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			
			printf("\nprice of pizaa is 300 rs ");
			
			printf("\nEnter qty=>");
			scanf("%d",&qty);
			
			printf("\nyour bill is =%d",qty*300);
			break;
			
			
		case 2:
			printf("\nprice of sandwich is 150 rs ");
			
			printf("\nenter qty=>");
			scanf("%d",&qty);
			
			printf("\nyour bill is =%d",qty*150);
			
			break;
			
		case 3:
			printf("\nprice of maggie is 50 rs ");
			
			printf("\nenter qty=>");
			scanf("%d",&qty);
			
			printf("\nyour bill is =%d ",qty*50);
			
			break;
				
		default:
			
			printf("\noption only 1 to 3");
	}
}
