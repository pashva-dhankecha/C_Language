#include<stdio.h>
main()
{
	int no,i,sum=0;
	 
	printf("enter the value:- ");
	scanf("%d",&no);
	 
	for(i=1;i<=no;i++)
	{
		sum = sum + i;
	}
	printf("sum :- %d",sum);
}
