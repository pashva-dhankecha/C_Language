#include<stdio.h>
main()
{
	int i,no1=0,no2=1,no3,n;
     printf("enter the value of n :-");
     scanf("%d",&n);
    for(i=2;i<n;i++)
	{
		no3=no1+no2;
		printf("%d \n",no3);
		no1=no2;
		no2=no3;
	
	}  
}
