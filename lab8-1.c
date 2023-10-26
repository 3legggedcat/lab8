/*
Lab 8 - Problem 1: Caesar cipher
Driver: <Franz Mischke> (<6263124>)
Navigator: <Zachary Garza> (6216372)
*/
//include
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//prortype encrypt
void encrypt(char* message, int shift);

//main
int main ()
{
	//print message
		//printf
	printf("A program to encrypt message using caesar cipher:\n");
	printf("====================================================\n");
	
	
	//declare varibles
	//char, int
	char message[100];
	int shift;
	
	//print message
		//printf
	printf("Input a message to encrypt: ");
	
	//get string from user
		//fget
	fgets(message, sizeof(message), stdin);
	//print message
		//printf
	printf("\nInput the value of shift for caesar cipher: ");
	//get shift for user
		//scanf
	scanf("%d", &shift);
	//call encrypt
	encrypt(message, shift);
	//print message
		//printf
	printf("\nEncrypted message is: %s", message);
	//end program
	printf("\n\nEnd program.");
	
}

//encrypt funcitno
void encrypt(char* message, int shift)
{
	//declare size
		//int, strlen()
	int size = strlen(message);
	//for loop from 0 to size
		//for
	for (int i = 0; i < size; i++)
	{
		//if i is in alphabet between 97-122
			//if condition
		if (((message[i] >= 'a') && (message[i] <= 'z')) || ((message[i] >= 'A') && (message[i] <= 'Z'))) 
		{
			
			//isupper
			message[i] = toupper(message[i]);
			
			//message at index i plus shift
				//add shift to ACsII
			message[i] = message[i] + shift;
			//if above 90 
			if (message[i] > 'Z')
			{
				//assign to current index and sub 26
				message[i] = message[i] - 26;
				
			}
			
		}				
				
				

						
							
					
	}			
	
	
	
	
}