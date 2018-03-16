#include<stdio.h>

int main()
{
	int number_one, number_two;

	// Taking Input 2 Numbers From User 
	printf("%s\n","-- Please Enter Two Numbers --");
	printf("First Number : ");
	scanf("%d",&number_one);
	printf("Second Number : ");
	scanf("%d",&number_two);
	
	// Showing the Number that User had Entered 
	printf("You've Entered These Numbers : %d", number_one);
	printf(" and %d",number_two );

	// Checking if they are Equal
	printf("\n\nAre they Equal : %d\n",isEqual(number_one, number_two));
	
	// Swapping 
	swap(&number_one, &number_two);
	printf("\n --- After Swapping --- ");
	printf("\n1st Number become : %d",number_one);
	printf("\n2nd Number become : %d",number_two);
	printf("\n");
	
	return 0;
}
