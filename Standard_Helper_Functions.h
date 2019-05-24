//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Function Definitions:
//	PrintDividerToConsole
//  PrintDivider
//	Max
//	Min
//  PrintCenteredMessage
//	PrintArrayToConsole
//	Swap
//------------------------------------------------------------------------------
#ifndef Standard_Helper_Functions_h
#define Standard_Helper_Functions_h

#include "Main.h"

void PrintDividerToConsole(int length, char character);

void PrintDivider(ostream& fout, int length, char character);

void PrintCenteredMessage(ostream& fout, string message, int centerWidth);

//------------------------------------------------------------------------------
//Max: If a is greater than b then return a, else return b
//--------------------------------------
//	a:
//		First value that will be compared by
//	b:
//		Second value that will be compared to
//------------------------------------------------------------------------------
int Max(int a, int b);

//------------------------------------------------------------------------------
//Min: If a is less than b then return a, else return b
//--------------------------------------
//	a:
//		First value that will be compared
//	b:
//		Second value that will be compared
//------------------------------------------------------------------------------
int Min (int a, int b);

//------------------------------------------------------------------------------
//PrintArrayToConsole: Outputs the contents of the given array to the console
//------------------------------------------------------------------------------
template <typename type>
void PrintArrayToConsole(type data[], int length)
{
	//Determine whether the array is empty
	if (length == 0)
	{
		//Output error message to the console
		PrintDividerToConsole(DIVIDER_WIDTH, ERROR_DIVIDER_CHAR);
		PrintCenteredMessage(cout, "Error - empty array", DIVIDER_WIDTH);
		PrintDividerToConsole(DIVIDER_WIDTH, ERROR_DIVIDER_CHAR);
	} // !if
	else
	{
		//For each element in the array
		for (int index = 0; index < length; index++)
		{
			//Output the current element to the console
			cout << data[index] << endl;
		} // !for
	} // !else
} // !PrintArrayToConsole

//------------------------------------------------------------------------------
//Swap: Swaps the data pointed to be the two given pointers
//------------------------------------------------------------------------------
template <typename type>
void Swap(type* first, type* second)
{
	//Save the value in the first pointer
	type temp = &first;

	//Copy the value in the second pointer to the first pointer
	first = second;

	//Save the value in the temp variable to the second pointer
	second = *temp;
} // !Swap

#endif // !Standard_Helper_Functions_h