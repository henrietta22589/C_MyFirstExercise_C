#include<stdio.h>
#include<stdlib.h>
//Declaration of the Functions, which have been Created in this programm
int AskForAnInteger();
int CheckIfnIsBiggerThanZero();
int CheckIfnIsOddOrEven();
main()
{
	//Create the pointer, which will be used to save the call the function(CheckIfnIsOddOrEven)
	int c = CheckIfnIsOddOrEven();
}
//Create a function, which will request an input value of the user
int AskForAnInteger()
{
	//Create the pointer, which will be used to save the integer value, the user will give us
	int number;
	// We are using the loop do-while, in order the user is giving a value<0. To have the opportunity to give again a value
	do
	{
	// Ask the user, to Give us an integer
	printf("Give us one integer which is greater than zero, in order to check if this\ninteger is Odd or Even number");
	//We use this extra printf in order to give more space in the text
	printf("\n");
	//importing the input value of the user
	scanf("%d", &number);
	//Giving the user, the opportunity to check the number
	printf("The number, you gave us is:%d\n", number);
	} while (number < 0);
	return number;
}
//Create a function, which is checking if the input value is greater 
int CheckIfnIsBiggerThanZero()
{
	//Create a pointer, which will be used to call the function(AskForAnInteger)
	int callFunction = AskForAnInteger();
	// We are using the loop do-while, in order the user is giving a value<0. To have the opportunity to give again a value
		//Check if the number, is greater than zero
	if (callFunction > 0)
	{
		// If the number is greater than zero, in the user this message will appear
		printf("The number you gave us is:\ngreater than zero");
		//We use this extra printf in order to give more space in the text
		printf("\n");
	}
	else
	{
		// If the number is lower than zero, in the user this message will appear
		printf("The number you gave us is lower than zero.\nPlease Give us a number, which is greater than zero");
	}
	return callFunction;
}
//Checking if the number is Odd or Even
int CheckIfnIsOddOrEven()
{
	//Create a pointer, which will be used to call the function(CheckIfnIsBiggerThanZero)
	int callFunction = CheckIfnIsBiggerThanZero();
	if (callFunction% 2 == 0)
	{
		//If the user give us an even number, this message will appear.
		printf("The number you gave us is odd");
	}
	else
	{
		//if the number is odd this message will appear
		printf("The number you gave us is Even");
	}
	return callFunction;
}
	


	
	
	









	
	


	