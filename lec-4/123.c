#include<stdio.h>
main()
{ 
    int rev,no=123,r;
    
    while(no>0)
	{
	   r=no%10;
	   rev = rev*10 + r;
	   no = no /10; 
    }
    printf("%d",rev);
}
