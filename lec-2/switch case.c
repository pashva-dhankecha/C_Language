#include<stdio.h>
main()
{
	int choice;
	 printf("press 1 to open\n");
	 printf("press 2 to exit");
	 scanf("%d",&choice);
	 
	 switch(choice)
	 {
	 	case 1: 
	 	printf("press 1 to oder pizza\n");
	 	printf("press 2 to oder burger\n");
	 	printf("press 3 to oder pasta\n");
	 	scanf("%d",&choice);   
	 	    switch(choice){
			 
	 	    case 1:
	 	      	printf("pizza");
	 	    break; 
	 	    
	 	    case 2:
	 	      	printf("burger");
	 	    break;
			 
			case 3:
	 	      	printf("pasta");
	 	    break;   
	 	      	
	 	 }
	 	      	
	 	break ;
	 	
	 	default:
	 		printf("invalid choice");
	 	break ;	
	 }
	
	
	
}
