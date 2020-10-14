#include<stdio.h>
main()
{
printf("Enter any Number:\n1\n2\n3\n4\n5\n")	;
int choice = 0;
scanf("%d",&choice);
switch(choice)
{
	case1:
		printf("food item - pasta \n price - Rs179");
		break;
	case2:
		printf("food item - pizza \n price - Rs239");
		break;
	case3:
		printf("food item - Burger \n price - Rs129");
		break;
	case4:
		printf("food item - French \n fries price - Rs99");
		break;
	case5:
	printf("food item - Sandwich \n price - Rs149");
		break;	
		default:printf("Invalid choice");
		}
return 0;
	
  }
