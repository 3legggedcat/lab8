/*
Lab 8 - Problem 2: Palindrome checker
Driver: Zachary Garza (6216372)
Navigator: Franz Mischke (6263124)
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//palindrome function
bool isPalindrome(char* message);

// main function
int main()
{
	// begin function
		// print message
			// printf
	printf("A program to check if a given word is a palindrome:\n");
	printf("==============================================\n");
		// declare variables
			// char string, bool
	char myWord[100];
	bool result;
	// get user input
		// display prompt
			// function: printf
	printf("Input a word: ");
		// get user input
			// function: fgets
	scanf(" %s", myWord);
	//fgets(myWord, sizeof(myWord), stdin);
	// check if palindrome
		// function: isPalindrome
			// set result to function
	result = isPalindrome(myWord);
	// if result is true
	if (result)
	{
		printf("\nThe word %s is a palindrome.\n", myWord);
		// print message to console
	}
	// if result is false
	else
	{
		// print message to console
		printf("\nThe word %s is not a palindrome.\n", myWord);
	}
	// end program
		// print message
			// function: printf
	printf("\nEnd program.");
		// return success
	return 0;
}

// isPalindrome function
bool isPalindrome(char* message)
{
	// declare variables
		// int size
	int size = strlen(message);
	// for loop from 0 to size/2 + 1
	for (int i = 0; i < size/2 ; i++)
	{
		// if message[i] is not message[size-1-i]
		if (message[i] != message[size-1-i])
		{
			// if true, return false
			return false;
		}
	}
	// return true
	return true;
}

