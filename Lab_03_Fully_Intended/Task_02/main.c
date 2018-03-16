#include <stdio.h>
#include <string.h>
#include "myStr.h"

void main()
{
	// Taking Input From User
	char *words;
	printf("Please Enter Your String : ");
	scanf("%s",&words);

	// Show the data that User had Entered
	printf("\nYou've Entered this String : %s",&words);

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