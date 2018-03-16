// Check for 2 Values to be Equal or Not...
int isEqual(int first_number, int second_number)
{
	if(first_number == second_number)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

// Swapping Without Using 3rd Variable ...
void swap(int *first_number, int *second_number)
{
	*first_number = *first_number + *second_number;
	*second_number = *first_number - *second_number;
	*first_number = *first_number - *second_number;
}

