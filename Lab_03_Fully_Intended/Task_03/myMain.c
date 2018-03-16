#include <stdio.h>
#include <string.h>
#include "myStr.h"
#include "myMath.h"

void main()
{
	int number_one, number_two;
	char *words;

	// --  Taking Input From User  --
	//Numbers
	printf("%s\n","-- Please Enter Two Numbers --");
	printf("First Number : ");
	scanf("%d",&number_one);
	printf("Second Number : ");
	scanf("%d",&number_two);
	// String in Char Array
	printf("Please Enter Your String : ");
	scanf("%s",&words);

	// Showing the Number that User had Entered 
	printf("You've Entered These Numbers : %d", number_one);
	printf(" and %d",number_two );
	printf("\nYou've Entered this String : %s",&words);

	// Checking if they are Equal
	printf("\n\nAre Numbers Equal : %d\n",isEqual(number_one, number_two));
	
	// Swapping 
	swap(&number_one, &number_two);
	printf("\n --- After Swapping --- ");
	printf("\n1st Number become : %d",number_one);
	printf("\n2nd Number become : %d",number_two);
	printf("\n");
	
	// Size of String
	int size = strlen(&words);
	printf("\nThe Size of String is : %d\n",size);

	//Checking for Palindrome
	if(isPalindrome(&words, size) == 1)
	{
		printf("%s is Palindrome\n",&words);
	}
	else
	{
		printf("%s is not Palindrome\n",&words);
	}
}