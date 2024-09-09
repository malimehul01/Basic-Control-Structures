#include<stdio.h>
main()
{
	
	int opt,no;
	
	printf("\npress 1 for squar");
	printf("\npress 2 for cube");
	printf("\nEnter option=>");
	scanf("%d",&opt);
	
	printf("\nEnter no=>");
	scanf("%d",&no);

switch(opt)
{
	case 1:
		printf("your ans is %d",no*no);
		break;
	case 2:
	printf("your ans is %d",no*no*no);
	break;
	
	default:
	
	printf("opps! 1 and 2");
	
	
}
	
	
	
}
