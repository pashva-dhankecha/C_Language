#include<stdio.h>
main()
{
	int no,i;
	 
	printf("enter the value of table number :- ");
	scanf("%d",&no);
	 
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",no,i,no*i);
	}
}
