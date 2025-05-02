#include<stdio.h>
//wap c program find a factorial number
main()
{
	
	int no,a=1,i;
	 
	printf("enter the value:- ");
	scanf("%d",&no);
		
	for(i;i<=no;i++){
	    a = a*i;
	}
	printf("%d",a);

}
